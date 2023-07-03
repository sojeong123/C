//20201012 컴퓨터학과 임소정

//2번
#include <stdio.h>
int main(void)
{
	char grade;

	printf("등급 입력 : ");
	scanf_s("%c", &grade);

	switch (grade)
	{
	case 'V':
		printf("V등급 고객의 할인율은 30%%이다.\n");
		break;
	case 'G':
		printf("G등급 고객의 할인율은 30%%이다.\n");
		break;
	case 'S':
		printf("S등급 고객의 할인율은 20%%이다.\n");
		break;
	case 'F':
		printf("F등급 고객의 할인율은 10%%이다.\n");
		break;
	case 'N':
		printf("N등급 고객의 할인율은 0%%이다.\n");
		break;
	}
	return 0;
}