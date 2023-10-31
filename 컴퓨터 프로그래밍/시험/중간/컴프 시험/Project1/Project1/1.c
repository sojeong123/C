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

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int maxIncreasing(char s[])
{
	// strlen�� ��������ʰ�, �Ű������� �޴� ���
	int i = 0;
	int max = 0;
	int count = 0;
	while (s[i] != '\0')
	{
		if (s[i] <= s[i + 1])
		{
			count++;
		}
		else
		{
			if (max < count)
			{
				max = count;
			}
			count = 0;
		}
		i++;
	}
	return max + 1;
}

int main(void)
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", maxIncreasing(s));
}
*/


// ���ڿ�(increasing sequence 2)
// ���� increasing sequenc 1������ �ִ� ���̸� ����Ͽ���.
// �ִ������ increasing sequence�� ����ϰ� �϶�.
// ���ڿ��� �Ű������� �Ͽ� �� ���ڿ� �ȿ� �ִ� ������
// increasing sequence�� ����ϰ� �� ���̸� ��ȯ�ϴ� �Լ��� maxIncreasing2�� �ۼ��϶�.
// 
// �ִ������ increasing sequence�� �������� ���,
// ���� ���� increasing sequence�� ����϶�.
// 
// ���� ����
// pabcabcdaaabcdcd	//�Է� : ���ڿ�
// aaabcd			//��� : �ִ� increasing sequence
// 6				//��� : �ִ�increasing sequence�� ����
// 
// vxyzoabde			//�Է� : ���ڿ�
// vxyz				//��� : vxyz�� abde�� ���� ���� ����Ѵ�.
// 4				//��� : �ִ�increasing sequence�� ����


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int maxIncreasing2(char s[])
{
	// strlen�� ��������ʰ�, �Ű������� �޴� ���
	int i = 0;
	int max = 0;
	int count = 0;
	int start = 0;
	int end = 0;
	while (s[i] != '\0')
	{
		if (s[i] <= s[i + 1])
		{
			count++;
		}
		else
		{
			if (max < count)
			{
				max = count;
				end = i;
				start = end - max;
			}
			count = 0;
		}
		i++;
	}
	for (int i = start; i <= end; i++)
	{
		printf("%c", s[i]);
	}
	printf("\n");
	return max + 1;
}

int main(void)
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", maxIncreasing2(s));
}
