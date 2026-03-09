#!/bin/bash
# 새 문제 파일 생성 스크립트
# 사용법: ./new.sh boj_1234
#         ./new.sh pg_42578

if [ -z "$1" ]; then
    echo "사용법: ./new.sh <문제이름>"
    echo "예시:   ./new.sh boj_1234"
    echo "        ./new.sh pg_42578"
    echo "        ./new.sh lc_two_sum"
    exit 1
fi

FILE="$1.cpp"

if [ -f "$FILE" ]; then
    echo "이미 존재하는 파일입니다: $FILE"
    exit 1
fi

cp template.cpp "$FILE"
echo "생성 완료: $FILE"
