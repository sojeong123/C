/* [강의자료 4] (예제 9) 동전 교환 프로그램
#include <stdio.h>
void main()
{
	int money, c500, c100, c50, c10;

	printf(" ## 교환할 돈은 ? ");
	scanf_s("%d", &money);

	c500 = money / 500;
	money = money % 500;

	c100 = money / 100;
	money = money % 100;

	c50 = money / 50;
	money = money % 50;
	
	c10 = money / 10;
	money = money % 10;
	
	printf("\n 오백 원짜리 ==> %d 개 \n", c500);
	printf(" 백 원짜리 ==> %d 개 \n", c100);
	printf(" 오십 원짜리 ==> %d 개 \n", c50);
	printf(" 십 원짜리 ==> %d 개 \n", c10);
	printf(" 바꾸지 못한 잔돈 ==> %d 원 \n", money);
}
*/


#include <stdio.h>
void main()
{
	int money;
	int c50000, c10000, c5000, c1000, c500, c100, c50, c10, c5, c1;

	printf("교환할 돈은 얼마인가요? ");
	scanf_s("%d", &money);

	if (money < 100000 || money > 200000) {
		printf("10만원 이상 200만원 이하만 가능합니다.\n");
		printf("교환할 돈은 얼마인가요? ");
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

	printf("\n5만원권 : %d 장\n", c50000);
	printf("1만원권 : %d 장\n", c10000);
	printf("5천원권 : %d 장\n", c5000);
	printf("1천원권 : %d 장\n", c1000);
	printf("500원 동전 : %d 개\n", c500);
	printf("100원 동전 : %d 개\n", c100);
	printf("50원 동전 : %d 개\n", c50);
	printf("10원 동전 : %d 개\n", c10);
	printf("5원 동전 : %d 개\n", c5);
	printf("1원 동전 : %d 개\n", c1);
}