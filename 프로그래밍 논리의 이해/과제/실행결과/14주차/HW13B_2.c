//20201012 ��ǻ���а� �Ӽ���
//HW13B_2
#include <stdio.h>
int main(void)
{
	char word[81];
	int i, sum = 0;

	printf("Enter one word : ");
	scanf_s("%s", word, sizeof(word));

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 48 && word[i] <= 57)
		{
			sum += word[i] - 48;
		}
	}

	printf("�ȿ� �ִ� ���ڵ��� ���� %d.\n", sum);

	return 0;
}