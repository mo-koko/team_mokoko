#include <stdio.h>

long int fact(int n);
int main()
{
    int num, result;
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &num);
    result = fact(num);
    printf("\n%d�� ���丮�� ���� %d�Դϴ�.\n", num, result);
}
long int fact(int n)
{
    int value;
    if (n <= 1)
    {
        printf("fact(%d) �Լ� ȣ��!\n", n);
        printf("fact(%d) �� ��ȯ!\n", n);
        return (1);
    }
    else
    printf("fact(%d) �Լ� ȣ��!\n", n);
        value = n*fact(n-1);
        printf("fact(%d) �� %d ��ȯ!\n", n, value);
        return value;
}