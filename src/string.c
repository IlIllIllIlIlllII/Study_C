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

    char c_array[10] = { 'c', 'o', 'd', 'i', 'n', 'g' };
    // printf("%s\n", c_array);
    // for (int i = 0; i < sizeof(c_array); i++) {
    //     printf("%c\n", c_array[i]);
    // }
    // for (int i = 0; i < sizeof(c_array); i++) {
    //     printf("%d\n", c_array[i]); // ASCII 코드 값 (NULL 문자는 0 으로 출력됨.)
    // }

    // 문자열 입력받기 : 경찰 조서 쓰기 예제
    char name[256];
    printf("이름을 입력하세요: ");
    scanf("%s", name, sizeof(name));
    printf("%s\n", name);

    return 0;
}