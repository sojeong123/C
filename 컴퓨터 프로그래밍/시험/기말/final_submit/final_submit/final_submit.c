
// 10
// (���ڿ�)
// 9���� �����Ͽ� ������ ���� �����ϴ� ���α׷��� �ۼ��϶�.
// �־��� ���ڿ��� ���ؼ� �տ������� ���� 2���� ������ �߶��� �� �ݺ��Ǵ� ���� �����Ͽ� ǥ���Ͽ� �� ���ڿ��� ���̸� ����ϴ� ���α׷��� �ۼ��϶�.
// ������� "abababmnxyxy"�� ���, 2�� ������ �߶� �����Ѵٸ� "3abmn2xy"�� ����� ���ڿ��̰� �� ���̴� 8�̴�.
// 
// ����	����
// abababxyz 		<-- �Է�
// 3abxyz			<-- ��� : ����� ���ڿ� ab/ab/ab/xy/z
// 6				<-- ���
// 
// aaaa				<-- �Է�
// 4aa				<-- ��� : ����� ���ڿ� aa/aa
// 3				<-- ���
// 
// xabab 			<-- �Է�
// xabab				<-- ��� : ����� ���ڿ� x/ab/ab/b
// 5				<-- ���
// 
// ���ѻ���
// 1. s�� ���̴� 1�̻� 1000�̸��̴�.
// 2. s�� ���ĺ� �ҹ��ڷθ� �����Ǿ� �ִ�.
// 3. �ߺ��Ǵ� ������ ������ 10�̸��̶�� ����(�̴� ���α׷��� ���� �ϱ� �����̴�.).


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char s[1001];

	scanf("%s", s);
	printf("\n%d\n", solution2(s));
}

int solution2(char* s)
{
	int answer = 0;
	int len = strlen(s);
	int i, j, k, l;
	int count = 1;
	int flag = 0;
	int temp = 0;
	char* temp_s = (char*)malloc(sizeof(char) * 1001);
	char* temp_s2 = (char*)malloc(sizeof(char) * 1001);

	for (i = 1; i <= len / 2; i++)
	{
		for (j = 0; j < len; j += i)
		{
			for (k = 0; k < i; k++)
			{
				temp_s[k] = s[j + k];
			}
			temp_s[k] = '\0';

			for (l = j + i; l < len; l += i)
			{
				for (k = 0; k < i; k++)
				{
					temp_s2[k] = s[l + k];
				}
				temp_s2[k] = '\0';

				if (strcmp(temp_s, temp_s2) == 0)
				{
					count++;
					flag = 1;
				}
				else
				{
					flag = 0;
					break;
				}
			}

			if (flag == 1)
			{
				temp += i;
				temp += (int)log10(count) + 1;
				count = 1;
			}
			else
			{
				temp += i;
			}
		}

		if (answer == 0)
		{
			answer = temp;
		}
		else if (answer > temp)
		{
			answer = temp;
		}

		temp = 0;
	}

	return answer;
}