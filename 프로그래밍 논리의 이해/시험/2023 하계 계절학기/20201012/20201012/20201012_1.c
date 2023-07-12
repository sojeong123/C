//20201012 컴퓨터학과 임소정
#include<stdio.h>
int main(void)
{
	int num, sum = 0, cnt = 0;

	while (1)
	{
		printf("0보다 큰(%d번째) 수 입력 : ", cnt + 1);
		scanf_s("%d", &num);

		if (num <= 0)
		{
			continue;
		}

		sum += num;
		cnt++;

		if (sum >= 50)
		{
			break;
		}
	}

	printf("합 = %d\n", sum);
	printf("더해진 데이터의 수 = %d\n", cnt);

	return 0;
}