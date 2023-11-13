// 20201012 컴퓨터학과 임소정
// HW9_1
#include<stdio.h>
#include <string.h>
int main(void)
{
	char string[50]; // 입력되는 문자열을 저장
	char alphaString1[50]; // 입력문자열에서 알파벳만 저장
	char alphaString2[50]; // 대소문자를 바꿈
	char digitString[50];
	char convertedString[50]; // 문자들과 숫자들로 재배열한 문자열

	printf("문자열을 입력하세요:");
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

	printf("문자들은 %s\n", alphaString1);
	printf("숫자들은 %s\n", digitString);

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

	printf("대소문자를 바꾼 문자들은 %s\n", alphaString2);
	printf("문자들과 숫자들로 재배열한 문자열은 %s\n", convertedString);
}