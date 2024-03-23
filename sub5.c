#include <stdio.h>

long int fact(int n);
int main()
{
    int num, result;
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);
    result = fact(num);
    printf("\n%d의 팩토리얼 값은 %d입니다.\n", num, result);
}
long int fact(int n)
{
    int value;
    if (n <= 1)
    {
        printf("fact(%d) 함수 호출!\n", n);
        printf("fact(%d) 값 반환!\n", n);
        return (1);
    }
    else
    printf("fact(%d) 함수 호출!\n", n);
        value = n*fact(n-1);
        printf("fact(%d) 값 %d 반환!\n", n, value);
        return value;
}