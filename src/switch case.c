#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    // srand(time(NULL));
    // int i = rand() % 3;
    // switch (i)
    // {
    // case 0:printf("가위\n");
    // case 1:printf("바위\n");
    // case 2:printf("보\n");
    // default:printf("몰라요\n");
    // }
    // return 0;

    // Up and Down

    srand(time(NULL));
    int num = rand() % 100 + 1; // 1 ~ 100
    printf("숫자 : %d\n", num);
    int answer = 0; // 정답
    int chance = 5; // 기회
    while (chance > 0) {
        printf("남은 기회 %d 번\n" , chance--);
        printf("숫자를 맞쳐보세요 : (1~100) : ");
        scanf_s("%d", &answer);
        if (answer > num) {
            printf("Down ");

        }
    }
}