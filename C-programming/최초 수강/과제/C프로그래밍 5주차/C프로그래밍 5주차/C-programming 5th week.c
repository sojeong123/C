/* [�����ڷ� 4] (���� 9) ���� ��ȯ ���α׷�
#include <stdio.h>
void main()
{
	int money, c500, c100, c50, c10;

	printf(" ## ��ȯ�� ���� ? ");
	scanf_s("%d", &money);

	c500 = money / 500;
	money = money % 500;

	c100 = money / 100;
	money = money % 100;

	c50 = money / 50;
	money = money % 50;
	
	c10 = money / 10;
	money = money % 10;
	
	printf("\n ���� ��¥�� ==> %d �� \n", c500);
	printf(" �� ��¥�� ==> %d �� \n", c100);
	printf(" ���� ��¥�� ==> %d �� \n", c50);
	printf(" �� ��¥�� ==> %d �� \n", c10);
	printf(" �ٲ��� ���� �ܵ� ==> %d �� \n", money);
}
*/


#include <stdio.h>
void main()
{
	int money;
	int c50000, c10000, c5000, c1000, c500, c100, c50, c10, c5, c1;

	printf("��ȯ�� ���� ���ΰ���? ");
	scanf_s("%d", &money);

	if (money < 100000 || money > 200000) {
		printf("10���� �̻� 200���� ���ϸ� �����մϴ�.\n");
		printf("��ȯ�� ���� ���ΰ���? ");
		scanf_s("%d", &money);
	}

	c50000 = money / 50000;
	money = money % 50000;

	c10000 = money / 10000;
	money = money % 10000;

	c5000 = money / 5000;
	money = money % 5000;

	c1000 = money / 1000;
	money = money % 1000;

	c500 = money / 500;
	money = money % 500;

	c100 = money / 100;
	money = money % 100;

	c50 = money / 50;
	money = money % 50;

	c10 = money / 10;
	money = money % 10;

	c5 = money / 5;
	money = money % 5;

	c1 = money;

	printf("\n5������ : %d ��\n", c50000);
	printf("1������ : %d ��\n", c10000);
	printf("5õ���� : %d ��\n", c5000);
	printf("1õ���� : %d ��\n", c1000);
	printf("500�� ���� : %d ��\n", c500);
	printf("100�� ���� : %d ��\n", c100);
	printf("50�� ���� : %d ��\n", c50);
	printf("10�� ���� : %d ��\n", c10);
	printf("5�� ���� : %d ��\n", c5);
	printf("1�� ���� : %d ��\n", c1);
}