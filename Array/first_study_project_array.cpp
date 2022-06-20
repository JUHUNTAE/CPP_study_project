#include <stdio.h>

int main(void)
{
    int subway_1 = 30;
    int subway_2 = 40;
    int subway_3 = 50;

    printf("지하철 1호차에 %d명이 타고있습니다.\n", subway_1);
    printf("지하철 1호차에 %d명이 타고있습니다.\n", subway_2);
    printf("지하철 1호차에 %d명이 타고있습니다.\n", subway_3);

    int subway_array[3]; // 0, 1, 2
    subway_array[0] = 30;
    subway_array[1] = 40;
    subway_array[2] = 50;

    for (int i = 0; i < 3; i++)
    {
        printf("지하철 %d호차에 %d 명이 타고있습니다.\n", i + 1, subway_array[i]);
    }

    //값 설정
    //값을 초기화 하지않으면 값이 설정한대로 나오지않는다
    int arr[10];
    for (int i = 1; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    //배열 크기는 상수로 선언
    int size = 10;
    int arr[10];

    // 값을 정하지않으면 이상한값으로 들어감
    int arr[10] = { 1, 2 };
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    int arr[] = { 1, 2 };   // >> arr[2]
    float arr_f[5] = { 1.0f, 2.0f, 3.0f };
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f\n", arr_f[i]);
    }

    char c = 'A';
    printf("%c\n", c);

    // >> char str[6]은 6글자여도 출력이안됨
    char str[7] = "coding";
    printf("%s\n", str);

    char str[] = "coding";
    printf("%s\n", str);
    printf("%d\n", sizeof(str));

    for (int i = 0; i < sizeof(str); i++)
    {
        printf("%c\n", str[i]);
    }

    //한글은 한글자당 2바이트 영어는 1바이트
    //char kor[] "나도코딩";
    //printf("%s\n", kor);
    //printf("%d\n", sizeof(kor));

    char c_array[7] = {'c', 'o', 'd', 'i', 'n', 'g', '\0'};
    printf("%s\n", c_array);

    char c_array[10] = {'c', 'o', 'd', 'i', 'n', 'g'};
    printf("%s\n", c_array);

    //아스키코드
    printf("%c\n", 'a');
    printf("%d\n", 'a');

    printf("%c\n", 'b');
    printf("%d\n", 'b');

    printf("%c\n", 'A');
    printf("%d\n", 'A');

    printf("%c\n", '\0');
    printf("%d\n", '\0');

    //아스키코드 정수
    for (int i = 0; i < 128; i++)
    {
        printf("아스키코드 정수 %d   :  %c\n", i, i);
    }


    return 0;
}