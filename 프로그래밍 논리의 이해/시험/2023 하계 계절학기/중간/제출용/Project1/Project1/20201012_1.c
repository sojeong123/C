//20201012 ��ǻ���а� �Ӽ���

//1��
#include <stdio.h>
int main(void)
{
	int num, box1, box2, box3, box;

	printf("�ֹ��� ���� �� �Է� : ");
	scanf_s("%d", &num);

	box1 = num / 50;
	box2 = (num % 50) / 30;
	box3 = ((num % 50) % 30) / 10;
	box = box1 + box2 + box3;

	printf("------------------------\n");
	printf("BOX1ȣ : %d\n", box1);
	printf("BOX2ȣ : %d\n", box2);
	printf("BOX3ȣ : %d\n", box3);
	printf("------------------------\n");
	printf("��۵� ���� �� : %d\n", box);

	return 0;
}