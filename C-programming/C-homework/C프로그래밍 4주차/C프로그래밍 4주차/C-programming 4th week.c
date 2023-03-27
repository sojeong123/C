//소수점이 없는 정수형
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

//문자형 데이터 형식
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

//10진수, 16진수, 8진수 중 어떤 진수의 값을 입력받을지 결정하고,
//입력받은 수를 10진수, 16진수, 8진수로 출력하는 프로그램이다.
//
//#include <stdio.h>
//void main()
//{
//	int type, data;
//
//	printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
//	scanf_s("%d", &type);
//
//	printf("값 입력 : "); 
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
//	printf("10진수 ==> %d \n", data);
//	printf("16진수 ==> %x \n", data);
//	printf("8진수 ==> %o \n", data);
//}

//4주차 과제
#include <stdio.h>
void main()
{
	int type, data;

	printf("입력진수 결정 10 16 8 : ");
	scanf_s("%d", &type);

	if (type == 10)
	{
		printf("10진수 값 입력 : ");
		scanf_s("%d", &data);
	}

	if (type == 16)
	{
		printf("16진수 값 입력 : ");
		scanf_s("%x", &data);
	}

	if (type == 8)
	{
		printf("8진수 값 입력 : ");
		scanf_s("%o", &data);
	}

	else
	{
		printf("다시 입력해주세요 (10, 16, 8) : ");
		scanf_s("%d", &type);
	}

	printf("10진수 ==> %d \n", data);
	printf("16진수 ==> %x \n", data);
	printf("8진수 ==> %o \n", data);
}