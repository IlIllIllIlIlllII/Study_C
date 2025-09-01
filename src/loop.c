#include <stdio.h>
// 반복문
// for, while, do while

int main_loop(void) {
//     for (int i = 1; i <= 10; i++) {
//         printf("Hello World %d\n", i);
//     }
//
// int i = 1;
//     while (i <= 10) {
//         printf("Hello World %d\n", i++);
//     }
//
//     int i = 1;
//     do {
//         printf("Hello World %d\n", i++);
//     }
//     while (i <= 10);
//
//     // 2중 반복문
//     for (int i = 1; i <= 3; ++i) {
//         printf("첫 번째 반복문 : %d\n", i);
//         for (int j = 1; j <= 5; ++j) {
//             printf("    두 번째 반복문 : %d\n", j);
//         }
//     }
//
//     // 구구단
//     for (int i = 2; i <= 9; ++i) {
//         for (int j = 1; j <= 9; ++j) {
//             printf("%d * %d = %d\n", i, j, i * j);
//         }
//         printf("\n");
//     }

    //별 찍기
    // for (int i = 1; i <= 5; ++i) {
    //     for (int j = 1; j <= 6 - i; ++j) {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= i; ++k) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // 피라미드
    int floor;
    printf("몇 층의 피라미드를 쌓을건가요?\n");
    scanf("%d", &floor);

    for (int i = 0; i < floor; i++) {

        for (int j = i; j < floor - 1; j++) {
            printf(" ");
        }

        for (int k = 0; k < i * 2 + 1; k++) {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}