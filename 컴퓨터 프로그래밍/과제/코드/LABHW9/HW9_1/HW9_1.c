// 20201012 ��ǻ���а� �Ӽ���
// HW9_1
#include<stdio.h>
#include <string.h>
int main(void)
{
	char string[50]; // �ԷµǴ� ���ڿ��� ����
	char alphaString1[50]; // �Է¹��ڿ����� ���ĺ��� ����
	char alphaString2[50]; // ��ҹ��ڸ� �ٲ�
	char digitString[50];
	char convertedString[50]; // ���ڵ�� ���ڵ�� ��迭�� ���ڿ�

	printf("���ڿ��� �Է��ϼ���:");
	fgets(string, sizeof(string), stdin);

	int i = 0, j = 0, k = 0, l = 0, m = 0;
	while (string[i] != '\0')
	{
		if (isalpha(string[i]))
		{
			alphaString1[j] = string[i];
			j++;
		}
		if (isdigit(string[i]))
		{
			digitString[k] = string[i];
			k++;
		}
		i++;
	}

	alphaString1[j] = '\0';
	digitString[k] = '\0';

	printf("���ڵ��� %s\n", alphaString1);
	printf("���ڵ��� %s\n", digitString);

	while (alphaString1[l] != '\0')
	{
		if (isupper(alphaString1[l]))
			alphaString2[l] = tolower(alphaString1[l]);
		else if (islower(alphaString1[l]))
			alphaString2[l] = toupper(alphaString1[l]);
		l++;
	}

	alphaString2[l] = '\0';

	while (alphaString1[m] != '\0')
	{
		convertedString[m] = alphaString1[m];
		m++;
	}

	while (digitString[m - l] != '\0')
	{
		convertedString[m] = digitString[m - l];
		m++;
	}

	convertedString[m] = '\0';

	printf("��ҹ��ڸ� �ٲ� ���ڵ��� %s\n", alphaString2);
	printf("���ڵ�� ���ڵ�� ��迭�� ���ڿ��� %s\n", convertedString);
}