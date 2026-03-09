#!/bin/bash
# C++ 코딩테스트 컴파일 & 실행 스크립트
# 사용법: ./run.sh solution.cpp
#         ./run.sh solution.cpp < input.txt

if [ -z "$1" ]; then
    echo "사용법: ./run.sh <파일명.cpp>"
    echo "예시:   ./run.sh solution.cpp"
    echo "        ./run.sh solution.cpp < input.txt"
    exit 1
fi

FILE="$1"
NAME="${FILE%.cpp}"

# Homebrew GCC 경로 자동 탐지
GCC=$(ls /usr/local/bin/g++-* 2>/dev/null | sort -V | tail -1)
if [ -z "$GCC" ]; then
    GCC=$(ls /opt/homebrew/bin/g++-* 2>/dev/null | sort -V | tail -1)
fi
if [ -z "$GCC" ]; then
    echo "Error: GCC를 찾을 수 없습니다. brew install gcc 를 먼저 실행하세요."
    exit 1
fi

echo "컴파일 중... ($GCC)"
$GCC -std=c++17 -O2 -Wall -o "$NAME" "$FILE"

if [ $? -eq 0 ]; then
    echo "실행 중..."
    echo "────────────────────"
    ./"$NAME"
    echo ""
    echo "────────────────────"
    echo "완료!"
    rm -f "$NAME"
else
    echo "컴파일 에러!"
fi
