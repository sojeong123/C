//20201012 ��ǻ���а� �Ӽ���
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[41] = { 0 };
	char vowel[41] = { 0 };
	char consonant[41] = { 0 };
	int i, j = 0, k = 0;

	printf("Enter the String : ");
	scanf_s("%s", str, sizeof(str));

	printf("\n���� ���ڿ� : %s\n", str);

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == 'a' || str[i] == 'A' ||
			str[i] == 'e' || str[i] == 'E' ||
			str[i] == 'i' || str[i] == 'I' ||
			str[i] == 'o' || str[i] == 'O' ||
			str[i] == 'u' || str[i] == 'U')
		{
			vowel[j] = str[i];
			j++;
		}
		else
		{
			consonant[k] = str[i];
			k++;
		}
	}

	for (i = 0; i < strlen(vowel); i++)
	{
		if (vowel[i] >= 'A' && vowel[i] <= 'Z')
		{
			vowel[i] += 32;
		}
	}

	for (i = 0; i < strlen(consonant); i++)
	{
		if (consonant[i] >= 'A' && consonant[i] <= 'Z')
		{
			consonant[i] += 32;
		}
	}

	printf("������ ���� : %s\n", vowel);
	printf("������ ���� : %s\n", consonant);

	return 0;
}