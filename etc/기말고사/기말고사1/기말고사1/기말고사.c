/*****************************************
기말고사1 20201012 컴퓨터학과 1학년 임소정
******************************************/

#include <stdio.h>
int main(void)
{
	int a[20];
	int n, key;
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &key);

	//여기 코드를 완성하시오.
	for (i = 0; a[i] != '\0'; i++)
		if (a[i] >= 65 && a[i] <= 90)
			printf("%d\n", a[i]);
	if ((num % i) == 0)// 다른 수로 나누어 지면 소수가 아니므로 종료
	{
		printf("소수가 아닙니다.\n");
		return 0;
	}
}
printf("소수입니다.\n");// 종료되지 않고 for문을 나오면 소수라 출력
return 0;

}