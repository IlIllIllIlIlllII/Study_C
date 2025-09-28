#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2); // 변경: void 반환형
void success();
void fail();

int main_function_project() {
    srand(time(NULL));
    int count = 0; // 맞힌 문제 갯수

    for (int i = 1; i <= 5; i++) { // 수정: 1~5까지 5문제
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);

        showQuestion(i, num1, num2); // 중복 printf 제거됨

        int answer = -1;
        scanf("%d", &answer);

        if (answer == -1) {
            printf("프로그램을 종료합니다.\n");
            exit(0);
        }

        else if (answer == num1 * num2) {
            // 성공
            success();
            count++;
        }

        else {
            // 실패
            fail();
        }
    }

    printf("\n\n당신은 5개의 비밀번호 중 %d개를 맞혔습니다.\n", count);
    return 0;
}

int getRandomNumber(int level) {
    return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2) { // 변경: void 반환형
    printf("\n\n\n########## %d 번 비밀번호 ##########\n", level);
    printf("\n\t%d X %d 는?\n\n", num1, num2);
    printf("#########################\n");
    printf("\n비밀번호를 입력하세요 (종료 : -1) >> ");
}

void success() {
    printf("\n >> Good! 정답입니다. \n");
}

void fail() {
    printf("\n >> 땡! 틀렸습니다. \n");
}
