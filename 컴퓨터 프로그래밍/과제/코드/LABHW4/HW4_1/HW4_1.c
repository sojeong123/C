//20201012 컴퓨터학과 임소정
//HW4_1
#include <stdio.h>
void save(int money);
void main()
{
	int money;

	while (1)
	{
		printf("저금할 금액<-1 for exit>: ");
		scanf_s("%d", &money);
		if (money == -1)
			break;
		save(money);
	}
	printf("입금 완료\n");
}

void save(int money)
{
	static int sum = 0;
	sum += money;
	printf("현재까지의 입금액 %d\n", sum);
}
