//20201012 ��ǻ���а� �Ӽ���
//LAB13B_1_2
//palindrome ����� �غ�
/*
#include <stdio.h>
int main(void)
{
	int i;
	char ch;
	char str[10] = "abcde";		//1)

	printf("--���� �� ���ڿ�--\n");
	printf("%s\n", str);

	//���ڿ� ����
	for (i = 0; i < 2; i++) // 2)
	{
		ch = str[4 - i]; // 3)
		str[4 - i] = str[i]; // 4)
		str[i] = ch;
	}

	printf("\n--���� �� ���ڿ�--\n");
	printf("%s \n", str);
	return 0;
}
*/

//�ܰ� 2
#include <stdio.h>
int main(void)
{
	int i;
	char ch;
	char str[10] = "12345678";		//1)

	printf("--���� �� ���ڿ�--\n");
	printf("%s\n", str);

	//���ڿ� ����
	for (i = 0; i < 4; i++) // 2)
	{
		ch = str[7 - i]; // 3)
		str[7 - i] = str[i]; // 4)
		str[i] = ch;
	}

	printf("\n--���� �� ���ڿ�--\n");
	printf("%s \n", str);
	return 0;
}