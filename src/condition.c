#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // // ������ ź�ٰ� ����, �л� / �Ϲ������� ���� (�Ϲ��� : 20��)
    // int age = 25;
    // if (age > 20) {
    //     printf("�Ϲ��� �Դϴ�\n");
    // }
    // else {
    //     printf("�Ϲ��� �Դϴ�\n");
    // }

    // int age;
    // printf("���̸� �Է��ϼ��� :");
    // scanf("%d", &age);
    // if (age <= 13) {
    //     printf("�ʵ��л� �Դϴ�.");
    // }
    //
    // else if (age <= 16)
    //     printf("���л� �Դϴ�");
    //
    // else if (age <= 19) {
    //     printf("����л� �Դϴ�");
    // }
    //
    // else {
    //     printf("�Ϲ��� �Դϴ�");
    // }



    // 1�� ���� 30�� ���� �ִ� �ݿ��� 1�� ���� 5������ ��ǥ�մϴ�
    // for (int i = 1; i <= 30; i++) {
    //     if (i >= 6) {
    //         printf("������ �л��� ���� ������");
    //         break;
    //
    //     }
    //     printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
    // }

    // 1�� ���� 30�� ���� �ִ� �ݿ��� 6�� ���� 10������ ��ǥ�մϴ�
    // 7���� �����ϰ� 6������ 10������ ���� ��ǥ�� �ϼ���

    // for (int i = 1; i <= 30; i++) {
    //     if (i >= 6 && i <= 10) {
    //         if (i == 7) {
    //             printf("%d �� �л��� �Ἦ�Դϴ�\n", i);
    //             continue;
    //         }
    //         printf("%d �л��� ���� ��ǥ�� �غ��ϼ���\n", i);
    //     }
    // }

    // Up and Down

    srand(time(NULL));
    int num = rand() % 100 + 1; // 1 ~ 100
    printf("���� : %d\n", num);
    int answer = 0; // ����
    int chance = 5; // ��ȸ
    while (chance > 0) { // 1 : �� 0 : ����
        printf("���� ��ȸ %d ��\n" , chance--);
        printf("���ڸ� ���ĺ����� : (1~100) : ");
        scanf_s("%d", &answer);
        if (answer > num) {
            printf("Down \n\n");
        }
        else if (answer < num) {
            printf("Up \n\n");
        }
        else if (answer == num) {
            printf("�����Դϴ� ! \n\n");
            break;
        }
        else {
            printf("�� �� ���� ������ �߻��߽��ϴ�.\n\n");
        }

        if (answer == 0) {
            printf("��� ��ȸ�� �� ����ϼ̳׿�, �ƽ��Ե� �����ϼ̽��ϴ�.\n");
        }
    }
    return 0;
}