#include <stdio.h>

void hanoi(int n, char start,  char work,char target);


int main() {
    int num = 3;
    char top_A = 'A'; char top_B = 'B'; char top_C = 'C';


    hanoi(num, top_A, top_B, top_C);

    return 0;
}

void hanoi(int n, char start,  char work,char target)
{
    if (n == 1)
    {
        printf("%c에서 원반 1를(을) %c로 옮김\n", start, target);
        /*옮기는 원반 123의 순서가 1-2-1-3-1-2-1 이기 때문에 원반 1을 옮기는 printf문을 만듦
        옮기는 원반의 번호는 n값을 따르기 때문에 위의 순서의 규칙성으로 보아, (3)-1-2-1-3-1-2-1로 볼 수 있음
        초기 n값인 3에서 재귀함수를 2번 호출하여 n값이 3->2->1로 변하고, print한다. 그러고 나선 가장 안쪽 루프를 끝내고
        n값이 2인 루프로 돌아옴. 다시, n값을 1로 낮추고 print -> n값이 3인 초기 루프 -> 초반과 같이 n값이 1까지 내려가며 print
        하며 마무리 */
        return;
    }

    hanoi(n - 1, start, target, work);
    printf("%c에서 원반 %d를(을) %c로 옮김\n", start,n, target);
    hanoi(n - 1, work, start, target);
}
