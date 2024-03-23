#include <stdio.h>

int main()
{
	char *arr[] = { "Korea", "Seoul", "Mapo", "152¹øÁö 2/3" };

	int i;
	int len_arr = sizeof(arr) / sizeof(arr[0]);

	for (i = 0;i < len_arr;i++)
	{
		printf("%s\n", arr[i]);
	}

	return 0;
}