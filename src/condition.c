#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // // 버스를 탄다고 가정, 학생 / 일반인으로 구분 (일반인 : 20세)
    // int age = 25;
    // if (age > 20) {
    //     printf("일반인 입니다\n");
    // }
    // else {
    //     printf("일반인 입니다\n");
    // }

    // int age;
    // printf("나이를 입력하세요 :");
    // scanf("%d", &age);
    // if (age <= 13) {
    //     printf("초등학생 입니다.");
    // }
    //
    // else if (age <= 16)
    //     printf("중학생 입니다");
    //
    // else if (age <= 19) {
    //     printf("고등학생 입니다");
    // }
    //
    // else {
    //     printf("일반인 입니다");
    // }



    // 1번 부터 30번 까지 있는 반에서 1번 부터 5번까지 발표합니다
    // for (int i = 1; i <= 30; i++) {
    //     if (i >= 6) {
    //         printf("나머지 학생은 집에 가세요");
    //         break;
    //
    //     }
    //     printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
    // }

    // 1번 부터 30번 까지 있는 반에서 6번 부터 10번까지 발표합니다
    // 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요

    // for (int i = 1; i <= 30; i++) {
    //     if (i >= 6 && i <= 10) {
    //         if (i == 7) {
    //             printf("%d 번 학생은 결석입니다\n", i);
    //             continue;
    //         }
    //         printf("%d 학생은 조별 발표를 준비하세요\n", i);
    //     }
    // }

    // Up and Down

    srand(time(NULL));
    int num = rand() % 100 + 1; // 1 ~ 100
    printf("숫자 : %d\n", num);
    int answer = 0; // 정답
    int chance = 5; // 기회
    while (chance > 0) { // 1 : 참 0 : 거짓
        printf("남은 기회 %d 번\n" , chance--);
        printf("숫자를 맞쳐보세요 : (1~100) : ");
        scanf_s("%d", &answer);
        if (answer > num) {
            printf("Down \n\n");
        }
        else if (answer < num) {
            printf("Up \n\n");
        }
        else if (answer == num) {
            printf("정답입니다 ! \n\n");
            break;
        }
        else {
            printf("알 수 없는 오류가 발생했습니다.\n\n");
        }

        if (answer == 0) {
            printf("모든 기회를 다 사용하셨네요, 아쉽게도 실패하셨습니다.\n");
        }
    }
    return 0;
}