// C���α׷��� �Ⱥ��� 2����
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
//�ٽ� �Է��ϼ���.//
//
//#include <stdio.h>
//void main()
//{
//	int a, b;
//	int result;
//	char k;
//
//	printf("ù ��° ����� �� ==> ");
//	scanf_s("%d", &a);
//	if (a == 0)
//	{
//		printf("0�� �Է��ϸ� �ȵ˴ϴ�. \n");
//		printf("�ٽ� �Է����ּ��� : %d", &a);
//	}
//
//	printf("+ - * / % ==> ");
//	scanf_s(" %c", &k); //��ĭ�� ����� ������, enter ������, �� enter ���� char������ �޾Ƶ鿩�� �׳� �״�� â�� ������ ��. ��ĭ �� ���� %c �� ��//
//	printf("�� ��° ����� �� ==> ");
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
//			printf("0���� ������ �ȵ˴ϴ�. \n");
//	}
//
//	if (k == '%') {
//		if (b != 0) {
//			result = a % b;
//			printf("%d %% %d = %d \n", a, b, result);
//		}else
//			printf("0���� ������ �ȵ˴ϴ�. \n");
//	}
//}

//����...

#include <stdio.h>
void main()
{
	int a, b, c, d;
	int result, namugi;
	char k;

	printf("ù ��° ����� �� ==> ");
	scanf_s("%d", &a);

	printf("+ - * / %% ==> ");
	scanf_s(" %c", &k);
	printf("�� ��° ����� �� ==> ");
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
			printf("������ ���� %d�Դϴ�. \n \n", namugi);
		}
		if (b == 0) {
			printf("0���� ������ �ȵ˴ϴ�. \n");
			printf("�ٽ� �Է����ּ��� ==> ");
			scanf_s("%d", &c);

			if (c != 0) {
				result = a / c;
				printf("%d / %d = %d \n", a, c, result);
				namugi = a % c;
				printf("������ ���� %d�Դϴ�. \n \n", namugi);
			}

			if (c == 0)
			{
				printf("0���� ������ �ȵ˴ϴ�. \n");

				printf("�ٽ� �Է����ּ��� ==> ");
				scanf_s("%d", &d);

				result = a / d;
				printf("%d / %d = %d \n", a, d, result);
				namugi = a % d;
				printf("������ ���� %d�Դϴ�. \n \n", namugi);

			}
		}
	}

	if (k == '%') {
		if (b != 0) {
			result = a % b;
			printf("%d %% %d = %d \n", a, b, result);
		}
		if (b == 0) {
			printf("0���� ������ �ȵ˴ϴ�. \n");
			printf("�ٽ� �Է����ּ��� ==> ");
			scanf_s("%d", &c);

			if (c != 0) {
				result = a % c;
				printf("%d %% %d = %d \n", a, c, result);
			}

			if (c == 0)
			{
				printf("0���� ������ �ȵ˴ϴ�. \n");

				printf("�ٽ� �Է����ּ��� ==> ");
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
//	printf("\n�� �ٲ�\n���� \n");
//	printf("\t��Ű\t���� \n");
//	printf("�̰���\r����ϴ�. \n");
//	printf("\a\a\a�߼Ҹ� 3�� \n");
//	printf("���ڰ� \"����\"�Ǵ� ȿ�� \n");
//	printf("\\\\\\ �������� 3�� ��� \n");
//}

