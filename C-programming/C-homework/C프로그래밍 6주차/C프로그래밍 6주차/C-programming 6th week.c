/* Ch05 5-6
#include <stdio.h>
void main()
{
	int a;
	
	printf("점수를 입력하세요 : ");
	scanf_s("%d", &a);

	if (a % 2 == 0)
	{
		printf("짝수를 입력했군요..\n");
	}
	else
	{
		printf("홀수를 입력했군요..\n");
	}
}
*/

/* Ch05 5-4
#include <stdio.h>
void main()
{
	int a;

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &a);

	if (a > 90)
	{
		printf("학점이 A입니다.\n");
	}
	if (a > 80)
	{
		printf("학점이 B입니다.\n");
	}
	if (a <= 80)
	{
		printf("재수강하세요.\n");
	}
	else
	{
		printf("다시 입력하세요.");
	}
}
*/

/* "q" 입력 전까지 무한반복하기
#include <stdio.h>

int main()
{
	int a;
	char input;

	for (;;)
	{
		printf("점수를 입력하세요 (종료: q): ");
		scanf("%c", &input);

		if (input == 'q')
		{
			break;
		}

		scanf("%d", &a);

		if (a > 90)
		{
			printf("학점이 A입니다.\n");
		}
		else if (a > 80)
		{
			printf("학점이 B입니다.\n");
		}
		else
		{
			printf("재수강하세요.\n");
		}
	}

	return 0;
}
*/

/*[응용 5-8] 90 70 60 A B C D F (툴림)
#include <stdio.h>
void main()
{
	int a;

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &a);

	if (a >= 90)
	{
		printf("학점이 A입니다.\n");

		if (a >= 80)
		{
			printf("학점이 B입니다.\n");

			if (a >= 70)
			{
				printf("학점이 C입니다.\n");

				if (a >= 60)
				{
					printf("학점이 D입니다.\n");
				}
				else
				{
					printf("학점이 F입니다.\n");
				}
			}
		}
	}
}
*/

/*[응용 5-8] 90 70 60 A B C D F (맞음)
#include <stdio.h>
int main()
{
	int a;

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &a);

	if (a >= 90)
	{
		printf("학점이 A입니다.\n");
	}
	else if (a >= 80)
	{
		printf("학점이 B입니다.\n");
	}
	else if (a >= 70)
	{
		printf("학점이 C입니다.\n");
	}
	else if (a >= 60)
	{
		printf("학점이 D입니다.\n");
	}
	else
	{
		printf("학점이 F입니다.\n");
	}
}
*/


/*[예제모음 12] 오칙연산 전자계산기
1. 계산부호 넣기
2. 첫번째값을 넣으시오.
3. 두번째값을 넣으시오.
4. 나머지랑 몫 나오기.
*/

/*
#include <stdio.h>
int main()
{
	char ch;
	int a,b;

	printf("계산할 연산자를 입력하세요. : ");
	scanf_s("%c", &ch);

	printf("첫 번째 수를 입력하세요. : ");
	scanf_s("%d", &a);

	printf("두 번째 수를 입력하세요. : ");
	scanf_s("%d", &b);

	if (ch == '+')
	{
		printf("%d + %d = %d 입니다.\n", a, b, a + b);
	}

	else if (ch == '-')
	{
		printf("%d - %d = %d 입니다.\n", a, b, a - b);
	}

	else if (ch == '*')
	{
		printf("%d * %d = %d 입니다.\n", a, b, a * b);
	}

	else if (ch == '/')
	{
		printf("%d / %d = %f 입니다.\n", a, b, a /(float)b);
	}

	else if (ch == '%')
	{
		printf("%d %% %d = %d 입니다\n.", a, b, a / b);
	}
	else
		printf("연산자를 잘못 입력했습니다.\n");
}
*/


/*1~30까지 홀수의 합을 for문을 이용하여 구하시오. (틀림)
#include <stdio.h>
void main()
{
	int i;
	int a = 0;

	for (i =! ; i <= 30; i++)
	{
		a = a + i;
	}

	printf("1에서 30까지 홀수의 합 : %d\n", a);
}
*/

/*[답안]
#include <stdio.h>
int main()
{
	int sum = 0;

	for (int i = 1; i <= 30; i += 2) {
		sum += i;
	}

	printf("1부터 30까지의 홀수의 합: %d\n", sum);

	return 0;
}
*/

