#include <stdio.h>
int main()
{
    int arr[2][3][4] = {{{1,2,3,4},{5,6,7,8},{9,10,11,12}},{{13,14,15,16},{17,18,19,20},{21,22,23,24}}};
    for(int i= 0; i < 2; i++)
    {
        for(int k = 0; k < 3; k++)
        {
            for(int j = 0; j < 4; j ++)
            {
                printf("array[%d][%d][%d] = %d\n", i,k,j,arr[i][k][j]);
            }
        }
    }
    return 0;
}