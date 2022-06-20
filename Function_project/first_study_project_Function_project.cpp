﻿#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int RandomNumber(int level);
int showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
    //문이 5개가있고, 각 문마다 점점 어려운 수식 퀴즈가 출제(랜덤)
    //맞히면 통과, 틀리면 실패

    srand(time(NULL));
    int count = 0;
    for (int i = 1; i < 6; i++)
    {
        //x * y = ??
        int num1 = RandomNumber(i);
        int num2 = RandomNumber(i);
        // printf("%d x %d ??", num1, num2);
        showQuestion(i, num1, num2);

        int answer = -1;
        scanf("%d", &answer);
        if (answer == -1)
        {
            printf("프로그램을 종료합니다\n .");
            exit(0);
        }
        else if (answer == num1 * num2)
        {
            //성공
            success();
            count++;
        }
        else
        {
            fail();
        }
    }

    printf("\n\n 당신은 5개의 비밀번호중 %d개를 맞췄습니다.\n\n", count);

    return 0;
}

int RandomNumber(int level)
{
    return rand() % (level * 7) + 1;
}
int showQuestion(int level, int num1, int num2)
{
    printf("\n\n\n######## %d 번째 비밀번호 #######", level);
    printf("\n\t%d x %d는? \n\n", num1, num2);
    printf("###################################\n");
    printf("\n비밀번호를 입력하세요 (종료 : -1) >> ");
}

void success()
{
    printf("\n >>> Good ! 정답입니다.\n");
}

void fail()
{
    printf("\n >>> Fail ! 틀렸습니다.\n");
}