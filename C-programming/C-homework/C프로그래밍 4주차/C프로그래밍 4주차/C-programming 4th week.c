//�Ҽ����� ���� ������
//#include <stdio.h>
//
//void main()
//{
//	int a = 100, b = 200;
//	float result;
//
//	result = a / b;
//	
//	printf("%f \n", result);
//}
//

//������ ������ ����
//#include <stdio.h>
//
//void main()
//{
//	char a, b, c;
//	
//	a = 'A';
//	
//	printf(" %c \n", a);
//	printf(" %d \n", a);
//
//	b = 'a';
//	c = b + 5;
//	printf(" %c \n", b);
//	printf(" %c \n", c);
//
//	c = 90;
//	printf(" %c \n", c);
//}

//#include <stdio.h>
//
//void main()
//{
//	char str[10] = "0123456789";
//
//	printf("str ==> %s \n", str);
//
//	str[0] = 'I';
//	str[1] = 'T';
//	str[2] = 'C';
//	str[3] = 'o';
//	str[4] = 'o';
//	str[5] = 'k';
//	str[6] = '\0';
//
//	printf("str ==> %s \n", str);
//	printf("str[7] ==> %c \n", str[7]);
//	printf("str[50] ==> %c \n", str[50]);
//}

//10����, 16����, 8���� �� � ������ ���� �Է¹����� �����ϰ�,
//�Է¹��� ���� 10����, 16����, 8������ ����ϴ� ���α׷��̴�.
//
//#include <stdio.h>
//void main()
//{
//	int type, data;
//
//	printf("�Է����� ���� <1>10 <2>16 <3>8 : ");
//	scanf_s("%d", &type);
//
//	printf("�� �Է� : "); 
//
//	if (type == 1)
//	{	scanf_s("%d", &data);	}
//
//	if (type == 2)
//	{	scanf_s("%x", &data);	}
//
//	if (type == 3)
//	{	scanf_s("%o", &data);	}
//
//	printf("10���� ==> %d \n", data);
//	printf("16���� ==> %x \n", data);
//	printf("8���� ==> %o \n", data);
//}

//4���� ����
#include <stdio.h>
void main()
{
	int type, data;

	printf("�Է����� ���� 10 16 8 : ");
	scanf_s("%d", &type);

	if (type == 10)
	{
		printf("10���� �� �Է� : ");
		scanf_s("%d", &data);
	}

	if (type == 16)
	{
		printf("16���� �� �Է� : ");
		scanf_s("%x", &data);
	}

	if (type == 8)
	{
		printf("8���� �� �Է� : ");
		scanf_s("%o", &data);
	}

	else
	{
		printf("�ٽ� �Է����ּ��� (10, 16, 8) : ");
		scanf_s("%d", &type);
	}

	printf("10���� ==> %d \n", data);
	printf("16���� ==> %x \n", data);
	printf("8���� ==> %o \n", data);
}