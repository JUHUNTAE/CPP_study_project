#include <stdio.h>

//선언
void p(int num);

void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate); //전체 total개에서 ate 개를 먹고 남은 수를 반환
int add(int num1, int num2);
int main(void)
{
    int num = 2;
    p(num);

    num = num + 3;
    // printf("num은 %d입니다.\n", num);
    p(num);
    num = num + 2;
    // printf("num은 %d입니다.\n", num);
     p(num);

    num *= 3;
    p(num);

    num /=7;
    p(num);

    //함수 종류
    //변환값이 없는 함수
    function_without_return();

    //반환값이 있는 함수
    int ret = function_with_return();
    p(ret);

    // 파라미터(전달값)가 없는 함수
    function_without_params();

    // 파라미터(전달값)가 있는 함수
    function_with_params(1, 2, 3);

    // 파라미터(전달값)도 받고, 반환값이 있는 함수
    int ret = apple(5, 2); //5개의 사과에서 2개를 먹었어요
    printf("사과 5개 중에 2개를 먹으면? %d 개가 남아요\n", ret);
    printf("사과 %d 개 중에 %d 개를 먹으면? %d 개가남아요 \n", 10, 4, apple(10, 4));

    int num = 2;
    num = add(num, 3);
    p(num);



    return 0;

}
    //정의
void p(int num)
{
    printf("num 은 %d 입니다.\n", num);
}

void function_without_return()
{
    printf("반환값이 없는 함수입니다.");
}

int function_with_return()
{
    printf("반환값이 있는 함수입니다.\n");
    return 10;
}

void function_without_params()
{
    printf("전달값이 없는 함수입니다.\n");
}

void function_with_params(int num1, int num2, int num3)
{
    printf("전달값이 있는 함수이며, 전달받은 값은 %d, %d, %d 입니다.\n", num1, num2, num3);
}

int appple(int total, int ate) //전체 total개에서 ate 개를 먹고 남은 수를 반환
{
    printf("전체개수에서 먹은만큼 남은 갯수 입니다.\n");
    return total - ate;
}

int add(int num1, int num2)
{
    return num1 + num2;
}
