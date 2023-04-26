/****************************************
LAB14B_3 20201012 컴퓨터학과 1학년 임소정
*****************************************/
#include <stdio.h>
void printUpperCase(char s[]);
void strLength(char s[]);
int main(void)
{
	char str[81];
	int leng;
	printf("Enter a string: ");
	scanf_s("%s", str, 81);
	leng = strLength(str);
	printf("길이는 %d\n", leng);
	printf("대문자만 출력하면\n");
	printUpperCase(str);
}
void printUpperCase(char s[])
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'A' && s[i] <= 'Z')
			printf("%c", s[i]);
	printf("\n");
}
void strLength(char s[])
{

}