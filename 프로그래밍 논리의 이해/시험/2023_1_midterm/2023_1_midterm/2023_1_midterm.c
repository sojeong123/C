//2023 1학기 중간
//1번
//물과 소금을 정수로 입력받아
//소금물을 만들었을 때 농도를 구하는 프로그램을 만드시오.

//[hint]
//농도 = 용질/용액(용매+용질) * 100
//물과 소금은 정수로 입력받을 것.
//결과는 소수점 2자리로 출력되어야 한다.

//출력 예시
//물 : 200
//소금 : 24
//농도 : 10.71%

//물 : 100
//소금 : 24
//농도 : 19.35%

/*
#include <stdio.h>
int main(void)
{
	int water, salt;
	double density;

	printf("물 : ");
	scanf_s("%d", &water);
	printf("소금 : ");
	scanf_s("%d", &salt);

	density = (double)salt / (water + salt) * 100;

	printf("농도 : %.2lf%%", density);

	return 0;
}
*/

//출생년도를 입력받아 마스크 구입가능한 요일을 출력하는 프로그램을 만드시오.
//출생년도 맨 뒷자리가
//1 또는 6이면 월요일
//2 또는 7이면 화요일
//3 또는 8이면 수요일
//4 또는 9이면 목요일
//5 또는 0이면 금요일
//토요일, 일요일은 숫자 상관없이 구매 가능

//출력 예시
//출생년도 : 1994
//목요일, 토요일, 일요일

//출생년도 : 2000
//금요일, 토요일, 일요일

/*
#include <stdio.h>
int main(void)
{
	int birth;

printf("출생년도 : ");
scanf_s("%d", &birth);

switch (birth % 10)
{
	case 1:
	case 6:
		printf("월요일, 토요일, 일요일");
		break;
	case 2:
	case 7:
		printf("화요일, 토요일, 일요일");
		break;
	case 3:
	case 8:
		printf("수요일, 토요일, 일요일");
		break;
	case 4:
	case 9:
		printf("목요일, 토요일, 일요일");
		break;
	case 5:
	case 0:
		printf("금요일, 토요일, 일요일");
		break;
	}

	return 0;
}
*/

//3번
//숫자를 입력받고
//그 숫자를 앞에서부터 읽는 것과 뒤에서부터 읽는 것이 같은지를 판별하는 프로그램을 만드시오.

//출력 예시
//숫자 : 532
//not the same. <-출력 (앞 : 532 / 뒤 : 235)

//숫자 : 121
//the same.

/*
#include <stdio.h>
int main(void)
{
	int num, temp, reverse = 0;

	printf("숫자 : ");
	scanf_s("%d", &num);

	temp = num;

	while (temp != 0)
	{
		reverse = reverse * 10 + temp % 10;
		temp /= 10;
	}

	if (num == reverse)
		printf("the same.");
	else
		printf("not the same.");

	return 0;
}
*/

//5번
//양의 정수를 입력받아
//그 수가 2개의 소수의 합으로 표현할 수 있는지 판별하는 프로그램을 만드시오.

//출력 예시
//양의 정수 : 15
//2 + 13 = 15

//양의 정수 : 16
//3 + 13 = 16
//5 + 11 = 16

//양의 정수 : 2
//no expression.

//양의 정수 : 11
//no expression.

/*
#include <stdio.h>
int main(void)
{
	int num, i, j, flag = 0;

	printf("양의 정수 : ");
	scanf_s("%d", &num);

	for (i = 2; i <= num / 2; i++)
	{
		for (j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				flag = 1;
				break;
			}
		}

		if (flag == 0)
		{
			for (j = 2; j <= (num - i) / 2; j++)
			{
				if ((num - i) % j == 0)
				{
					flag = 1;
					break;
				}
			}
		}

		if (flag == 0)
			printf("%d + %d = %d\n", i, num - i, num);

		flag = 0;
	}
}
*/

//2020 2학기 중간