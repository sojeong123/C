//20201012 ��ǻ���а� �Ӽ���

/*
//LAB 1_1
#include <stdio.h>
int main(void)
{
	int num[4];

	printf("Enter 1th number: ");
	scanf_s("%d", &num[0]);
	printf("Enter 2th number: ");
	scanf_s("%d", &num[1]);
	printf("Enter 3th number: ");
	scanf_s("%d", &num[2]);
	printf("Enter 4th number: ");
	scanf_s("%d", &num[3]);
	printf("Enter 5th number: ");
	scanf_s("%d", &num[4]);
	printf("--------------------------------\n");
	printf("������ %d\n", num[0] + num[1] + num[2] + num[3] + num[4]);
	printf("����� %d\n", (num[0] + num[1] + num[2] + num[3] + num[4]) / 5);
	printf("--------------------------------\n");
	printf("array[0] = %d\n", num[0]);
	printf("array[1] = %d\n", num[1]);
	printf("array[2] = %d\n", num[2]);
	printf("array[3] = %d\n", num[3]);
	printf("array[4] = %d\n", num[4]);
	return 0;
}
*/

/*
//LAB1_2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int data[100];
	int num, i;

	srand(time(NULL));

	printf("Enter the number of random numbers (<= 100) : ");
	scanf_s("%d", &num);
	printf("�ִ밪�� %d\n", num);
	printf("--------------------------------\n");
	printf("�߻��� ������\n");

	for (i = 0; i < num; i++)
	{
		data[i] = rand() % 100;
		printf("%5d", data[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");

	return 0;
}
*/

/*
//HW 1_1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int data[100];
	int num, i, max = 0;
	int count[10] = { 0 };

	srand(time(NULL));

	printf("Enter the number of random numbers (<= 100) : ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		data[i] = rand() % 10;
		if (max < data[i])
			max = data[i];
	}

	for (i = 0; i < num; i++)
	{
		count[data[i]]++;
	}

	for (i = 0; i <= max; i++)
	{
		printf("%d�� ���� : %d\n", i, count[i]);
	}

	printf("--------------------------------\n");

	printf("�߻��� ������\n");
	for (i = 0; i < num; i++)
	{
		printf("%5d", data[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}

	return 0;
}
*/

/*
//1���� ��10
//�� ���� �迭�� �������� �Ǻ��Ͽ� ���� �ٸ��ٸ� ���
//����
//�� ���� �迭 A[],B[]�� ���غ���.
//ó������ �ϴ� ���ٰ� ����.
//�ϴ� ũ�Ⱑ �ٸ���, �ٸ���.
//ũ��
�� ���ٸ�
//ù��°, �ι�°, ... , ������ ���Ҹ� ���ϴٰ� �ٸ����� �߰ߵǸ�, �ٸ���.
//�ٸ��� �߰��ϸ� ����.
//����� �� : ���ٴ� �Ǵ��� �Ϸ��� �ݵ�� ������ Ȯ���ؾ� �Ѵ�.
//

int isSameArray(int a[], int b[], int aSize, int bSize)
{
	int same = 1;
	if (aSize != bSize) same = 0;
	else
	{
		for (i = 0; i < aSize; i++)
			if (a[i] != b[i])
				return 0;
	}
	return 1;
}
*/


//1���� ��12
/*
//printArray ����
keyIndex=-1;
for(i=0; i < 11; i++)
	if (arr[i] == searchKey)
	{
		keyIndex = i;
		break;
	}
if(keyIndex==-1)
	printf("�� ã�Ҵ�.\n");
else
	printf("ã�Ҵ�. �ε��� ��ȣ�� %d\n", keyIndex);
*/

/*
//�Ҽ�ã�� ����
found = 0;			//�� ã�Ҵ�.

for(i=0; i < 11; i++)
	if (arr[i] == searchKey)
	{
		found = 1;	//ã�Ҵ�.	//ã���� �� �ε��� ��ȣ
		break;
	}

if (found==0)
	printf("�� ã�Ҵ�.\n");
else
	printf("ã�Ҵ�. �ε��� ��ȣ�� %d\n", i);")
*/

/*
//found �A ����
for(i=0; i < 11; i++)
	if (arr[i] == searchKey)
		break;

if(i==size)
	printf("�� ã�Ҵ�.\n");
else
	printf("ã�Ҵ�. �ε��� ��ȣ�� %d\n", i);
*/

/*
//found ���� �Լ��� �ٲ� ����
for(i[0]; i < 11; i++)
	if (arr[i] == searchKey)
		break;

if(i==size)
	printf("�� ã�Ҵ�.\n");
else
	printf("ã�Ҵ�. �ε��� ��ȣ�� %d\n", i);

---------------------------------------------
int searchKeyIndex(int a[], int size, int serachKey)	//ã�� ��ġ
{
	int i;

	for (i = 0; i < 11; i++)
		if (arr[i] == serachKey)
			return i;		//�ε�����ȣ ��ȯ
	
	return -1;				//�� ã�Ҵ�.
}
*/

//�Լ��� �ٲٴ� �� �ϳ��� ������3���߿��� 1���� ����ϱ�(���趧)

/*
//1���� ��15
void reverse(int arr[], int size)
{
	for(i=0; i < size/2; i++)
	{
		temp = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = temp;
	}
}
*/


