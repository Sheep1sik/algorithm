#!/bin/bash
# C++ 코딩테스트 컴파일 & 실행 스크립트
# 사용법: ./run.sh solution.cpp
#         ./run.sh solution.cpp < input.txt

if [ -z "$1" ]; then
    echo "사용법: ./run.sh <파일명.cpp>"
    exit 1
fi

FILE="$1"
NAME="${FILE%.cpp}"
GCC="/usr/local/bin/g++-15"

if [ ! -f "$GCC" ]; then
    echo "Error: g++-15를 찾을 수 없습니다."
    exit 1
fi

echo "컴파일 중..."
$GCC -std=c++17 -O2 -Wall -o "$NAME" "$FILE"

if [ $? -eq 0 ]; then
    echo "────────────────────"
    if [ -t 0 ]; then
        ./"$NAME" </dev/tty
    else
        ./"$NAME"
    fi
    echo ""
    echo "────────────────────"
    echo "완료!"
    rm -f "$NAME"
else
    echo "컴파일 에러!"
fi
