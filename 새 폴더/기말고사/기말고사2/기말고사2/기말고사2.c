/*****************************************
�⸻���2 20201012 ��ǻ���а� 1�г� �Ӽ���
******************************************/
// num�� �Ҽ��̸� 1�� �ƴϸ� 0�� ��ȯ�ϴ� �Լ��� ����ϸ� ���ϴ�.
#include <stdio.h>
int is_prime(int num)
{
    int lcnt = 0;
    for (lcnt = 2; lcnt < num; lcnt++)
    {
        if ((num % lcnt) == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int a[20], p[20], np[20]; // p�� �Ҽ��� np�� �Ҽ��ƴ� ���� ���� �迭
    int i;
    int n;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);






}