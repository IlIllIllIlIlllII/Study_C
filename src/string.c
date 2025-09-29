#include <stdio.h>

int main_string() {

    // // 문자 vs 문자열
    // char c = 'A';
    // printf("%c\n", c);
    //
    // // 문자열 끝에 '끝'을 의미하는 NULL 문자 '\0' 이 포함되어야 함
    // // char str[6] = "coding"; // [c] [o] [d] [i] [n] [g] [\0]
    // char str[7] = "coding";
    // printf("%s\n", str);
    //
    // char str[] = "coding";
    // // printf("%c\n", str);
    // // printf("%d\n", sizeof(str));
    //
    // for (int i = 0; i < sizeof(str); i++) {
    //     printf("%c\n", str[i]);
    // }

    char kor[] = "바코드";
    printf("%s\n", kor);
    printf("%d\n", sizeof(kor));
    // 영어 한글자: 1byte
    // 한글 한글자: 2byte

    return 0;
}