#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    // srand(time(NULL));
    // int i = rand() % 3;
    // switch (i)
    // {
    // case 0:printf("����\n");
    // case 1:printf("����\n");
    // case 2:printf("��\n");
    // default:printf("�����\n");
    // }
    // return 0;

    // Up and Down

    srand(time(NULL));
    int num = rand() % 100 + 1; // 1 ~ 100
    printf("���� : %d\n", num);
    int answer = 0; // ����
    int chance = 5; // ��ȸ
    while (chance > 0) {
        printf("���� ��ȸ %d ��\n" , chance--);
        printf("���ڸ� ���ĺ����� : (1~100) : ");
        scanf_s("%d", &answer);
        if (answer > num) {
            printf("Down ");

        }
    }
}