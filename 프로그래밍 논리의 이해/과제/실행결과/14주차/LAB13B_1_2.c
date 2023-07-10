//20201012 컴퓨터학과 임소정
//LAB13B_1_2
//palindrome 만들기 준비
/*
#include <stdio.h>
int main(void)
{
	int i;
	char ch;
	char str[10] = "abcde";		//1)

	printf("--변경 전 문자열--\n");
	printf("%s\n", str);

	//문자열 변경
	for (i = 0; i < 2; i++) // 2)
	{
		ch = str[4 - i]; // 3)
		str[4 - i] = str[i]; // 4)
		str[i] = ch;
	}

	printf("\n--변경 후 문자열--\n");
	printf("%s \n", str);
	return 0;
}
*/

//단계 2
#include <stdio.h>
int main(void)
{
	int i;
	char ch;
	char str[10] = "12345678";		//1)

	printf("--변경 전 문자열--\n");
	printf("%s\n", str);

	//문자열 변경
	for (i = 0; i < 4; i++) // 2)
	{
		ch = str[7 - i]; // 3)
		str[7 - i] = str[i]; // 4)
		str[i] = ch;
	}

	printf("\n--변경 후 문자열--\n");
	printf("%s \n", str);
	return 0;
}