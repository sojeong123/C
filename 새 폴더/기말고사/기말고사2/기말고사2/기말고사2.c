/*****************************************
기말고사2 20201012 컴퓨터학과 1학년 임소정
******************************************/
// num이 소수이면 1을 아니면 0을 반환하는 함수를 사용하면 편리하다.
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
    int a[20], p[20], np[20]; // p는 소수를 np는 소수아닌 수를 담을 배열
    int i;
    int n;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);






}