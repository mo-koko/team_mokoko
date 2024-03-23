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
        printf("%c���� ���� 1��(��) %c�� �ű�\n", start, target);
        /*�ű�� ���� 123�� ������ 1-2-1-3-1-2-1 �̱� ������ ���� 1�� �ű�� printf���� ����
        �ű�� ������ ��ȣ�� n���� ������ ������ ���� ������ ��Ģ������ ����, (3)-1-2-1-3-1-2-1�� �� �� ����
        �ʱ� n���� 3���� ����Լ��� 2�� ȣ���Ͽ� n���� 3->2->1�� ���ϰ�, print�Ѵ�. �׷��� ���� ���� ���� ������ ������
        n���� 2�� ������ ���ƿ�. �ٽ�, n���� 1�� ���߰� print -> n���� 3�� �ʱ� ���� -> �ʹݰ� ���� n���� 1���� �������� print
        �ϸ� ������ */
        return;
    }

    hanoi(n - 1, start, target, work);
    printf("%c���� ���� %d��(��) %c�� �ű�\n", start,n, target);
    hanoi(n - 1, work, start, target);
}
