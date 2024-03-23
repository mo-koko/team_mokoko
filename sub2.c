#include <stdio.h>
#define SIZE 100
int main()
{
    int i = 0;
	char string[SIZE];
	printf("문자열을 입력하세요 : ");
	scanf("%s", string);
    printf("입력된 문자열은 \n%s\n입니다.", string);
    while(string[i] != 0)
        i++;
    
    printf("입력된 문자열의 길이 : %d\n", i);
	return 0;
}
