//20201012 ��ǻ���а� �Ӽ���
//HW13B_3
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	//�ʿ��� ���� ����
	int i, j = 0;

	//���ڿ� ���� �Է�
	printf("Enter one word : ");
	scanf_s("%s", word, sizeof(word));

	//���ڿ��� �Ųٷ� ���
	for (i = 0; word[i] != '\0'; i++)
	{
		newWord[i] = word[4 - i];
	}
	newWord[i] = '\0';

	printf("The reversed word is %s.\n", newWord);

	return 0;
}