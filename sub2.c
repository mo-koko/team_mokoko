#include <stdio.h>
#define SIZE 100
int main()
{
    int i = 0;
	char string[SIZE];
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", string);
    printf("�Էµ� ���ڿ��� \n%s\n�Դϴ�.", string);
    while(string[i] != 0)
        i++;
    
    printf("�Էµ� ���ڿ��� ���� : %d\n", i);
	return 0;
}
