//1��
//(���ð� �ݺ� �̿�)
//0���� ū ���� ���Ͽ�
//�� ������ ���� 50 �̻��� �� ������
//�������� �հ� ������ �ݺ��Ͽ� �Է¹޾�
//�������� �հ� ������ ����ϴ� ���α׷��� �ۼ��϶�.

//0���� ū ���� �Էµ� ������ �ݺ��ؼ� �Է��� �޴´�.
//������ ���� ����� �� �̿���� �ʴ´�.

//���� ���� 1
//0���� ū(1��°) �� �Է� : -9
//0���� ū(1��°) �� �Է� : 5
//0���� ū(2��°) �� �Է� : 23
//0���� ū(3��°) �� �Է� : -9
//0���� ū(3��°) �� �Է� : 12
//0���� ū(4��°) �� �Է� : 56
//�� = 96
//������ �������� �� = 4

//���� ���� 2
//0���� ū(1��°) �� �Է� : 10
//0���� ū(2��°) �� �Է� : 20
//0���� ū(3��°) �� �Է� : 30
//�� = 60
//������ �������� �� = 3

//���� ���� 3
//0���� ū(1��°) �� �Է� : -10
//0���� ū(1��°) �� �Է� : -40
//0���� ū(1��°) �� �Է� : -50
//0���� ū(1��°) �� �Է� : 20
//0���� ū(2��°) �� �Է� : -80
//0���� ū(2��°) �� �Է� : 30
//�� = 50
//������ �������� �� = 2
/*
#include<stdio.h>
int main(void)
{
	int num, sum = 0, cnt = 0;

	while (1)
	{
		printf("0���� ū(%d��°) �� �Է� : ", cnt + 1);
		scanf_s("%d", &num);

		if (num <= 0)
		{
			continue;
		}

		sum += num;
		cnt++;

		if (sum >= 50)
		{
			break;
		}
	}

	printf("�� = %d\n", sum);
	printf("������ �������� �� = %d\n", cnt);

	return 0;
}
*/

//2��
//(�Լ� �̿�)
//2�ڸ� �̻��� ������ �Է¹޾�
//�� ���� ȸ������ �ƴ����� �Ǻ��ϴ� ���α׷��� �ۼ��϶�.

//1)ȸ�� ���δ� isPalindrom()�Լ��� �̿��Ͽ� �Ǻ��ϸ�, ȸ���̸� 1, �ƴϸ� 0�� ��ȯ�Ѵ�.
//2)ȸ��(palindrom)�� �տ��� ������ �ڿ��� ������ ���� ���� ���Ѵ�. (��, 12321, 11, 2552)

//���� ���� 1
//2�ڸ� �̻��� ������ �Է��Ͻÿ�. : 123321
//123321�� ȸ���̴�.

//���� ���� 2
//2�ڸ� �̻��� ������ �Է��Ͻÿ�. : 12331
//12331�� ȸ���� �ƴϴ�.

/*
#include <stdio.h>
int isPalindrom(int a);
int main(void)
{
	int num;

	printf("2�ڸ� �̻��� ������ �Է��Ͻÿ�. : ");
	scanf_s("%d", &num);

	if (isPalindrom(num) == 1)
	{
		printf("%d�� ȸ���̴�.\n", num);
	}
	else
	{
		printf("%d�� ȸ���� �ƴϴ�.\n", num);
	}

	return 0;
}

int isPalindrom(int a)
{
	int i, j, k, cnt = 0;
	int arr[10] = { 0 };

	for (i = 0; i < 10; i++)
	{
		arr[i] = a % 10;
		a /= 10;
		if (a == 0)
		{
			break;
		}
	}

	for (j = 0; j <= i; j++)
	{
		if (arr[j] == arr[i - j])
		{
			cnt++;
		}
	}

	if (cnt == i + 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
*/

//3��
//(����, �Լ�, �迭)
//n(50�� ����)���� ������ �����Ͽ�
//�迭�� ������ �� ������ ���� �� �Ҽ����� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//��, ������ ������ 10�̻� 99�����̴�.
//�Ҽ� �Ǻ��� int isPrime(int a)�� �̿��Ͽ� �Ҽ��̸� 1�� �Ҽ��� �ƴϸ� 0�� ��ȯ�ϵ��� �Ѵ�.
//������ ���� �߿� �Ҽ��� ������ '�Ҽ��� ����.'��� �޼����� ����Ѵ�.
//�Ҽ��� ����� �� �� �ٿ� 7������ ��µǵ��� �Ѵ�.

//���� ���� 1
//Enter the number : 50
//
//=== ���� ������ ��� ===
//43 87 12 57 58 97 85
//41 70 77 15 11 17 87
//31 50 18 47 23 73 54
//85 83 44 35 14 96 12
//17 97 25 64 57 23 78
//14 34 93 78 25 76 45
//47 44 20 79 72 78 12
//50
//=== �Ҽ� ������ ��� ===
//43 97 41 11 17 31 47
//23 73 83 17 97 23 47
//79

//���� ���� 2
//Enter the number : 5
//
//=== ���� ������ ��� ===
//69 97 93 78 97
//=== �Ҽ� ������ ��� ===
//97 97

//���� ���� 3
//Enter the number : 2
//
//=== ���� ������ ��� ===
//51 68
//�Ҽ��� ����.

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int isPrime(int a);
int main(void)
{
	int n, i, j, cnt = 0;
	int arr[50] = { 0 };
	int prime[50] = { 0 };

	srand(time(NULL));

	printf("Enter the number : ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		arr[i] = rand() % 90 + 10;
	}

	printf("\n=== ���� ������ ��� ===\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
		if ((i + 1) % 7 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");

	printf("=== �Ҽ� ������ ��� ===\n");
	for (i = 0; i < n; i++)
	{
		if (isPrime(arr[i]) == 1)
		{
			prime[cnt] = arr[i];
			cnt++;
		}
	}

	if (cnt == 0)
	{
		printf("�Ҽ��� ����.\n");
	}
	else
	{
		for (i = 0; i < cnt; i++)
		{
			printf("%d ", prime[i]);
			if ((i + 1) % 7 == 0)
			{
				printf("\n");
			}
		}
		printf("\n");
	}

	return 0;
}

int isPrime(int a)
{
	int i;

	if (a == 1)
	{
		return 0;
	}

	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			return 0;
		}
	}

	return 1;
}
*/

//4��
//(���ڿ� �迭)
//������ ���������� ������ �ϳ��� ���ڿ��� �Է¹޾�
//�� ���ڿ� �߿��� ������ ������ ���� �и��Ͽ�
//���ο� ���ڿ��� ������ ������ ����ϴ� ���α׷��� �ۼ��϶�.

//1)�Է¹޴� ���ڿ��� �ִ� ���̴� 40���� �Ѵ�.
//2)���ĺ�26�� ���� �� ������ a, e, i, o, u 5���̴�.
//3)�빮�ڴ� ��� �ҹ��ڷ� ��ȯ�Ѵ�.
//4)������ ������ �и��Ͽ� ���ο� ���ڿ��� �������ʰ� �ٷ� ����ϸ� �ȵȴ�.

//���� ���� 1
//Enter the String : AaBbCcEeXx
//
//���� ���ڿ� : AaBbCcEeXx
//������ ���� : aaee
//������ ���� : bbccxx

//���� ���� 2
//Enter the String : BCDXYZ
//
//���� ���ڿ� : BCDXYZ
//������ ���� :
//������ ���� : bcdxyz

//���� ���� 3
//Enter the String : ComputerScience
//
//���� ���ڿ� : ComputerScience
//������ ���� : oueiee
//������ ���� : cmptscnc

/*
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
*/

//5��
//���� ���� 1
//Enter a number : 20
//Enter a number : 10
//Enter a number : 50
//Enter a number : 30
//Enter a number : 25
//
//������ : 20 10 50 30 25
//����� 27.
//
//��հ��� �Ÿ� : 7 17 23 3 2
//50 : **************************************************
//25 : *************************

//���� ���� 2
//Enter a number : 20
//Enter a number : 15
//Enter a number : 25
//Enter a number : 50
//Enter a number : 30
//
//������ : 20 15 25 50 30
//����� 28.
//
//��հ��� �Ÿ� : 8 13 3 22 2
//50 : **************************************************
//30 : *************************


//(���ڿ� �迭, �Լ�)
//���� ���� 5���� �迭�� ������ ��
//����� ���Ͽ� ��հ� �Ÿ��� ���� ����� ����
//��հ� �Ÿ��� ���� �� ���� ���Ͽ�
//�� ����ŭ ���� ����ϴ� ���α׷��� �ۼ��϶�.

//1)�ԷµǴ� ���� 1�̻� 50���ϴ�.
//2)�Է¹��� ���� ����ϱ� ����, printArray()�Լ��� ����� ����Ѵ�.
//3)������κ��� �Ÿ��� ���� �� ���� ã�� ��ȯ�ϱ� ����, getMax()�Լ��� ����� ����Ѵ�.
//4)������κ��� �Ÿ��� ���� ����� ���� ã�� ��ȯ�ϱ� ����, getMin()�Լ��� ����� ����Ѵ�.
//5)�Ÿ��� ���� ��� � ���� �����ص� �ȴ�.
//6)��հ� ���� ����� ���� ��հ� ���� �� ����ŭ ��(*)�� ����ϱ� ���� printStar()�Լ��� ����� ����Ѵ�.
//7)������ ������ �Լ� �ܿ� �ٸ� �Լ��� �ʿ��ϸ� ����� ����϶�.
//8)�Ÿ��� ��հ��� ������ ũ�⸦ �ǹ��ϹǷ�, ������ �ƴ� ����̴�.

/*
#include <stdio.h>
int getMax(int a[], int n);
int getMin(int a[], int n);
void printArray(int a[], int n);
void printStar(int a[], int n);
int main(void)
{
	int arr[5] = { 0 };
	int i, sum = 0, avg = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Enter a number : ");
		scanf_s("%d", &arr[i]);
	}

	printf("\n������ : ");
	printArray(arr, 5);

	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
	}

	avg = sum / 5;

	printf("\n����� %d.\n", avg);

	printf("\n��հ��� �Ÿ� : ");
	for (i = 0; i < 5; i++)
	{
		if (avg - arr[i] < 0)
		{
			printf("%d ", arr[i] - avg);
		}
		else
		{
			printf("%d ", avg - arr[i]);
		}
	}

	printf("\n");
	printStar(arr, 5);

	return 0;
}

int getMax(int a[], int n)
{
	int i, max = a[0];

	for (i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}

	return max;
}

int getMin(int a[], int n)
{
	int i, min = a[0];

	for (i = 0; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}

	return min;
}

void printArray(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

void printStar(int a[], int n)
{
	int i, max, min;

	max = getMax(a, n);
	min = getMin(a, n);

	printf("%d : ", max);
	for (i = 0; i < max; i++)
	{
		printf("*");
	}

	printf("\n%d : ", min);
	for (i = 0; i < min; i++)
	{
		printf("*");
	}
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
void printArray(int arr[], int size);
int getMax(int arr[], int size);
int getMin(int arr[], int size);
void printStar(int num);
int main(void)
{
	int arr[5];
	int i;
	int sum = 0;
	int avg = 0;
	int max = 0;
	int min = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Enter a number : ");
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}
	avg = sum / 5;

	printf("\n������ : ");
	printArray(arr, 5);
	printf("\n����� %d.\n", avg);

	printf("\n��հ��� �Ÿ� : ");
	for (i = 0; i < 5; i++)
	{
		if (avg > arr[i])
		{
			printf("%d ", avg - arr[i]);
		}
		else
		{
			printf("%d ", arr[i] - avg);
		}
	}
	printf("\n");

	max = getMax(arr, 5);
	min = getMin(arr, 5);

	printStar(max);
	printStar(min);

	return 0;
}

void printArray(int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

int getMax(int arr[], int size)
{
	int i;
	int max = 0;

	for (i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	return max;
}

int getMin(int arr[], int size)
{
	int i;
	int min = 0;

	for (i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	return min;
}

void printStar(int num)
{
	int i;

	printf("\n%d : ", num);
	for (i = 0; i < num; i++)
	{
		printf("*");
	}
	printf("\n");
}
*/

include <stdio.h>
int getMax(int arr[], int size);
int getMin(int arr[], int size);
void printArray(int arr[], int size);
void printStar(int num);

int main(void)
{
	int arr[5];
	int i;
	int sum = 0;
	int avg = 0;
	int max = 0;
	int min = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Enter a number : ");
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}
	avg = sum / 5;
	printf("\n������ : ");
	printArray(arr, 5);
	printf("\n����� %d.\n", avg);
	printf("\n��հ��� �Ÿ� : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", avg - arr[i]);
	}
	printf("\n");
	max = getMax(arr, 5);
	min = getMin(arr, 5);
	printStar(max);
	printStar(min);
	return 0;
}

int getMax(int arr[], int size)
{
	int i;
	int max = 0;
	int avg = 0;
	int maxIndex = 0;
	avg = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;
	for (i = 0; i < size; i++)
	{
		if (max < avg - arr[i])
		{
			max = avg - arr[i];
			maxIndex = i;
		}
	}
	return arr[maxIndex];
}

int getMin(int arr[], int size)
{
	int i;
	int min = 0;
	int avg = 0;
	int minIndex = 0;
	avg = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;
	for (i = 0; i < size; i++)
	{
		if (min > avg - arr[i])
		{
			min = avg - arr[i];
			minIndex = i;
		}
	}
	return arr[minIndex];
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

void printStar(int num)
{
	int i;
	printf("\n%d : ", num);
	for (i = 0; i < num; i++)
	{
		printf("*");
	}
	printf("\n");
}

