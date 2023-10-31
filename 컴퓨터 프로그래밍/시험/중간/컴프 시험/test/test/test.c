// ���ڿ� (increasing sequence)
// ���ڰ� abcdfó�� ���ĺ� ������ �̷���� ����
// increasing sequence��� �Ѵ�.
// ��, ���� ���ĺ��� ascii���� ���ų�, �� ū ���ĺ��� �ڿ� ������ sequence�̴�.
// �̷� ���ǿ� ���ϸ�,
// baf�� increasing sequence�� �ƴϴ�.
// 
// ���̰� 50�̸��� ���ڿ��� �о,
// �� ���ڿ� �ȿ��� ���������� ��Ÿ���� �ִ� ������ increasing sequence�� ã�� ������.
// ���ڿ��� �Ű������� �Ͽ� �� ���ڿ� �ȿ� �ִ� ������ increasing sequence�� ��ȯ�ϴ� �Լ��� maxIncreasing�� �ۼ��϶�.
// 
// pabcabcdaaabcdcd�� ���,
// p abc abcd aaabcd�� increasing sequence�� �Ǹ�,
// �� �� ���� �� ���� aaabcd�̴�.
// increasing sequence�� �ִ� ���̸� ����Ѵ�.
// 
// ���� ����
// pabcabcdaaabcdcd		// �Է�: ���ڿ�
// 6					// ���: �ִ� increasing sequence�� ����
// 
// crwyzabd				// �Է�: ���ڿ�
// 5					// ���: �ִ� increasing sequence�� ����


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//strlen�� �̿��ϴ� ���
int maxIncreasing(char s[])
{
	int i, j, k, len, max = 0;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			for (k = i; k < j; k++)
			{
				if (s[k] >= s[k + 1])
					break;
			}
			if (k == j)
			{
				if (max < j - i + 1)
					max = j - i + 1;
			}
		}
	}
	return max;
}

//strlen�� �̿����� �ʴ� ���
/*
int maxIncreasing(char s[])
{
	int i, j, k, max = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i + 1; s[j] != '\0'; j++)
		{
			for (k = i; k < j; k++)
			{
				if (s[k] >= s[k + 1])
					break;
			}
			if (k == j)
			{
				if (max < j - i + 1)
					max = j - i + 1;
			}
		}
	}
	return max;
}
*/

//strlen�� �̿����� �ʰ�, ���ڿ��� ���̸� �Ű������� �޴� ���
int maxIncreasing(char s[])
{
int i, j, k, max = 0;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = i + 1; j < strlen(s); j++)
		{
			for (k = i; k < j; k++)
			{
				if (s[k] >= s[k + 1])
					break;
			}
			if (k == j)
			{
				if (max < j - i + 1)
					max = j - i + 1;
			}
		}
	}
	return max;
}
*/ 

int main(void)
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", maxIncreasing(s));
}