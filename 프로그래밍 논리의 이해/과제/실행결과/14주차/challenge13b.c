//20201012 ��ǻ���а� �Ӽ���
//challenge 13b
#include <stdio.h>
int main(void)
{
	char word[81];
	int i, sum = 0;

	printf("Enter a word : ");
	scanf_s("%s", word, sizeof(word));

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 48 && word[i] <= 57)
		{
			sum += word[i] - 48;
			if (word[i + 1] >= 48 && word[i + 1] <= 57)
			{
				sum *= 10;
			}
		}
	}

	printf("���� ���� ���� ���� %d.\n", sum);

	return 0;
}