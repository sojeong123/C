//20201012 ��ǻ���а� �Ӽ�
//challenge 13c
#include <stdio.h>
int main(void)
{
	char word[81];
	int i, a = 0, e = 0, i1 = 0, o = 0, u = 0;

	printf("���ڿ� �Է� (���ڼ� 81����) : ");
	scanf_s("%s", word, sizeof(word));

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] == 'a' || word[i] == 'A')
		{
			a++;
		}
		else if (word[i] == 'e' || word[i] == 'E')
		{
			e++;
		}
		else if (word[i] == 'i' || word[i] == 'I')
		{
			i1++;
		}
		else if (word[i] == 'o' || word[i] == 'O')
		{
			o++;
		}
		else if (word[i] == 'u' || word[i] == 'U')
		{
			u++;
		}
	}

	printf("a or A : %d��\n", a);
	printf("e or E : %d��\n", e);
	printf("i or I : %d��\n", i1);
	printf("o or O : %d��\n", o);
	printf("u or U : %d��\n", u);

	return 0;
}