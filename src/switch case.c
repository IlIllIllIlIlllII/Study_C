#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_switchCase(void) {

    srand(time(NULL));
    int i = rand() % 3;
    switch (i)
    {
    case 0:printf("����\n");
    case 1:printf("����\n");
    case 2:printf("��\n");
    default:printf("�����\n");
    }
    return 0;
}