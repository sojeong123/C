//20201012 ��ǻ���а� �Ӽ���
//challenge 13a
#include <stdio.h>
int main(void)
{
	char word1[81], word2[81];
	int i, j = 0;

	printf("Enter the first word : ");
	scanf_s("%s", word1, sizeof(word1));

	printf("Enter the second word : ");
	scanf_s("%s", word2, sizeof(word2));

	for (i = 0; word1[i] != '\0'; i++)
	{
		if (word1[i] != word2[i])
		{
			printf("�� �ܾ�� �ٸ���.\n");
			return 0;
		}
	}

	printf("�� �ܾ�� ����.\n");

	return 0;
}