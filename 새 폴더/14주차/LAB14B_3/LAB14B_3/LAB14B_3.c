/****************************************
LAB14B_3 20201012 ��ǻ���а� 1�г� �Ӽ���
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
	printf("���̴� %d\n", leng);
	printf("�빮�ڸ� ����ϸ�\n");
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