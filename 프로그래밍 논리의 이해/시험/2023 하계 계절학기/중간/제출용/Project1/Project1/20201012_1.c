//20201012 컴퓨터학과 임소정

//1번
#include <stdio.h>
int main(void)
{
	int num, box1, box2, box3, box;

	printf("주문할 귤의 수 입력 : ");
	scanf_s("%d", &num);

	box1 = num / 50;
	box2 = (num % 50) / 30;
	box3 = ((num % 50) % 30) / 10;
	box = box1 + box2 + box3;

	printf("------------------------\n");
	printf("BOX1호 : %d\n", box1);
	printf("BOX2호 : %d\n", box2);
	printf("BOX3호 : %d\n", box3);
	printf("------------------------\n");
	printf("배송된 상자 수 : %d\n", box);

	return 0;
}