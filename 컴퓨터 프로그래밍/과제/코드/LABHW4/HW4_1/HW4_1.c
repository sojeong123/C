//20201012 ��ǻ���а� �Ӽ���
//HW4_1
#include <stdio.h>
void save(int money);
void main()
{
	int money;

	while (1)
	{
		printf("������ �ݾ�<-1 for exit>: ");
		scanf_s("%d", &money);
		if (money == -1)
			break;
		save(money);
	}
	printf("�Ա� �Ϸ�\n");
}

void save(int money)
{
	static int sum = 0;
	sum += money;
	printf("��������� �Աݾ� %d\n", sum);
}
