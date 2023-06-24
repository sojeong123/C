// C프로그래밍 안병태 2주차
//
//#define _crt_secure_no_warnings//
//#include <stdio.h>
//void main()
//{
//	
//	int a, b;
//	int plus, minus, multiple, nanugi;
//
//	scanf_s("%d", &a);
//	scanf_s("%d", &b);
//
//	plus = a + b;
//	minus = a - b;
//	multiple = a * b;
//	nanugi = a / b;
//
//	printf("%d + %d = %d\n", a, b, plus);
//	printf("%d - %d = %d\n", a, b, minus);
//	printf("%d * %d = %d\n", a, b, multiple);
//	printf("%d %% %d = %d\n", a, b, nanugi);
//
//}
//다시 입력하세요.//
//
//#include <stdio.h>
//void main()
//{
//	int a, b;
//	int result;
//	char k;
//
//	printf("첫 번째 계산할 값 ==> ");
//	scanf_s("%d", &a);
//	if (a == 0)
//	{
//		printf("0을 입력하면 안됩니다. \n");
//		printf("다시 입력해주세요 : %d", &a);
//	}
//
//	printf("+ - * / % ==> ");
//	scanf_s(" %c", &k); //한칸을 띄우지 않을때, enter 누르면, 그 enter 값을 char값으로 받아들여서 그냥 그대로 창이 꺼지게 됨. 한칸 꼭 띄우고 %c 쓸 것//
//	printf("두 번째 계산할 값 ==> ");
//	scanf_s("%d", &b);
//
//	if (k == '+') {
//		result = a + b;
//		printf("%d + %d = %d \n", a, b, result);
//	}
//
//	if (k == '-') {
//		result = a - b;
//		printf("%d - %d = %d \n", a, b, result);
//	}
//	
//	if (k == '*') {
//		result = a * b;
//		printf("%d * %d = %d \n", a, b, result);
//	}
//
//	if (k == '/') {
//		if (b != 0) {
//			result = a / b;
//			printf("%d / %d = %d \n", a, b, result);
//		}else
//			printf("0으로 나누면 안됩니다. \n");
//	}
//
//	if (k == '%') {
//		if (b != 0) {
//			result = a % b;
//			printf("%d %% %d = %d \n", a, b, result);
//		}else
//			printf("0으로 나누면 안됩니다. \n");
//	}
//}

//과제...

#include <stdio.h>
void main()
{
	int a, b, c, d;
	int result, namugi;
	char k;

	printf("첫 번째 계산할 값 ==> ");
	scanf_s("%d", &a);

	printf("+ - * / %% ==> ");
	scanf_s(" %c", &k);
	printf("두 번째 계산할 값 ==> ");
	scanf_s("%d", &b);

	if (k == '+') {
		result = a + b;
		printf("%d + %d = %d \n", a, b, result);
	}

	if (k == '-') {
		result = a - b;
		printf("%d - %d = %d \n", a, b, result);
	}

	if (k == '*') {
		result = a * b;
		printf("%d * %d = %d \n", a, b, result);
	}

	if (k == '/') {
		if (b != 0) {
			result = a / b;
			printf("%d / %d = %d \n", a, b, result);
			namugi = a % b;
			printf("나머지 값은 %d입니다. \n \n", namugi);
		}
		if (b == 0) {
			printf("0으로 나누면 안됩니다. \n");
			printf("다시 입력해주세요 ==> ");
			scanf_s("%d", &c);

			if (c != 0) {
				result = a / c;
				printf("%d / %d = %d \n", a, c, result);
				namugi = a % c;
				printf("나머지 값은 %d입니다. \n \n", namugi);
			}

			if (c == 0)
			{
				printf("0으로 나누면 안됩니다. \n");

				printf("다시 입력해주세요 ==> ");
				scanf_s("%d", &d);

				result = a / d;
				printf("%d / %d = %d \n", a, d, result);
				namugi = a % d;
				printf("나머지 값은 %d입니다. \n \n", namugi);

			}
		}
	}

	if (k == '%') {
		if (b != 0) {
			result = a % b;
			printf("%d %% %d = %d \n", a, b, result);
		}
		if (b == 0) {
			printf("0으로 나누면 안됩니다. \n");
			printf("다시 입력해주세요 ==> ");
			scanf_s("%d", &c);

			if (c != 0) {
				result = a % c;
				printf("%d %% %d = %d \n", a, c, result);
			}

			if (c == 0)
			{
				printf("0으로 나누면 안됩니다. \n");

				printf("다시 입력해주세요 ==> ");
				scanf_s("%d", &d);

				result = a / d;
				printf("%d %% %d = %d \n", a, d, result);
			}
		}
	}
}

//#include <stdio.h>
//
//void main()
//{
//	printf("\n줄 바꿈\n연습 \n");
//	printf("\t탭키\t연습 \n");
//	printf("이것을\r덮어씁니다. \n");
//	printf("\a\a\a삐소리 3번 \n");
//	printf("글자가 \"강조\"되는 효과 \n");
//	printf("\\\\\\ 역슬래시 3개 출력 \n");
//}

