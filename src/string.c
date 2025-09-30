#include <stdio.h>

int main() {

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

    // char kor[] = "바코드";
    // printf("%s\n", kor);
    // printf("%d\n", sizeof(kor));
    // // 영어 한글자: 1byte
    // // 한글 한글자: 2byte
    // // char 크기 : 1byte


    // char c_array[7] = { 'c' 'o' 'd' 'i' 'n' 'g' '\0' }
    // char c_array[6] = { 'c', 'o', 'd', 'i', 'n', 'g' };
    // printf("%s\n", c_array);

    // char c_array[10] = { 'c', 'o', 'd', 'i', 'n', 'g' };
    // printf("%s\n", c_array);
    // for (int i = 0; i < sizeof(c_array); i++) {
    //     printf("%c\n", c_array[i]);
    // }
    // for (int i = 0; i < sizeof(c_array); i++) {
    //     printf("%d\n", c_array[i]); // ASCII 코드 값 (NULL 문자는 0 으로 출력됨.)
    // }

    // // 문자열 입력받기 : 경찰 조서 쓰기 예제
    // char name[256];
    // printf("이름을 입력하세요: ");
    // scanf("%s", name, sizeof(name));
    // printf("%s\n", name);

    // 참고 : ASCII 코드란 ANSI (미국표준협회) 에서 제시한 표준 코드 체게
    // 7bit , 128 개 코드 (0~127)
    // a : 97 (문자 a 의 아스키코드 정수값)
    // A : 65
    // 0 : 48

    // printf("%c\n", 'a');
    // printf("%d\n", 'a');
    //
    // printf("%c\n", 'b');
    // printf("%d\n", 'b');
    //
    // printf("%c\n", 'A');
    // printf("%d\n", 'A');
    //
    // printf("%c\n", '\0');
    // printf("%d\n", '\0');
    //
    // printf("%c\n", '0');
    // printf("%d\n", '0');
    //
    // printf("%c\n", '1');
    // printf("%d\n", '1');

    // 참고2 : 0~127 사이의 아스키코드 정수값에 해당하는 문자 확인
    for (int i = 0; i <= 127; i++) {
        printf("아스키코드 정수 %d : %c\n", i ,i);
    }
    return 0;
}