//LABHW3_5
//���� ������ �̿��Ͽ� ������ ���� ���α׷��� �ۼ��϶�.
//0�̻� 100�̸��� ������ �߻����� �̸������Ͽ� �Ʒ��� ���� ����϶�.
//�迭�� �����ϴ� �Լ� selectionSort�� �̿��϶�.
//������ ������ ����
//void selectionSort(int list[], int size);

//���� ����
//�߻��� ���� :		17 71 79  5 89 93 82 27 84 41
//���� �� : 			 5 17 27 41 71 79 82 84 89 93

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void selectionSort(int list[], int size);

int main(void)
{
	int list[SIZE];
	int i;

	srand(time(NULL));

	printf("�߻��� ���� : ");
	for (i = 0; i < SIZE; i++)
	{
		list[i] = rand() % 100;
		printf("%3d ", list[i]);
	}
	printf("\n");

	selectionSort(list, SIZE);

	printf("���� �� : ");
	for (i = 0; i < SIZE; i++)
		printf("%3d ", list[i]);
	printf("\n");

	return 0;
}

void selectionSort(int list[], int size)
{
	int i, j, min, temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (list[j] < list[min])
				min = j;
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;
	}
}
*/


//LAB16_1
//(2���� �迭 ����)
//�Ʒ��� ���� ����� ������ (��)���� ���ʷ� �ڵ带 �߰��Ͽ� ���α׷��϶�.

//(��) �Ʒ��� ���� ���� ������ 2���� �迭 table�� ����� ���ÿ� �ʱ�ȭ�� �� �״�� ����ϴ� ���α׷��� �ۼ��϶�
//���� ����
//��>
//0 0 0
//0 0 0
//0 0 0
//0 0 0
//0 0 0


/*
#include <stdio.h>

int main(void)
{
	int table[5][3] = { 0 };
	int i, j;

	printf("��>\n");

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", table[i][j]);
		printf("\n");
	}

	return 0;
}
*/

//(��) table ��ҵ��� ���� �Ʒ��� ���� �����ϴ� �ڵ�(for�� ���)�� �ۼ��϶�.
//���� ���� index�� ���� ���� �ش� ��Ұ� ���� �ȴ�.
//�״�� ����ϴ� ���ϸ����� while���� ����Ͽ� �ۼ��϶�.
//���� ����
//��>
//0 1 2
//1 2 3
//2 3 4
//3 4 5
//4 5 6

/*
#include <stdio.h>

int main(void)
{
	int table[5][3] = { 0 };
	int i, j;

	printf("��>\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			table[i][j] = i + j;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d ", table[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
*/

//(��) �� ����� ���� ���Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.
//���� ����
//��>
//Total is 45.

/*
#include <stdio.h>
int main(void)
{
	int table[5][3] = { 0 };
	int i, j, sum = 0;

	printf("��>\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			table[i][j] = i + j;

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			sum += table[i][j];

	printf("Total is %d.\n", sum);

	return 0;
}
*/

//(������)�� �ϳ��� ���α׷����� �ۼ��϶�.
//���� ����
//��>
//0 0 0
//0 0 0
//0 0 0
//0 0 0
//0 0 0
//��>
//0 1 2
//1 2 3
//2 3 4
//3 4 5
//4 5 6
//��>
//Total is 45.

/*
#include <stdio.h>
int main(void)
{
	int table[5][3] = { 0 };
	int i, j, sum = 0;

	printf("��>\n");

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", table[i][j]);
		printf("\n");
	}

	printf("��>\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			table[i][j] = i + j;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d ", table[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	printf("��>\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			sum += table[i][j];

	printf("Total is %d.\n", sum);

	return 0;
}
*/

//LAB16_3
//�Ʒ��� ���� text ������ �ִٰ� ����.
//�̶� �Ʒ��� ���õ��� ������ ���ÿ�.
//char text[][10] = { "ABC", "abcd", "Hello" };
//(��) ���� text�� �޸� ũ��� ���ΰ� ����ÿ�. (�ڽ��� ������ ���� ���� ����, sizeof �����ڸ� �̿��Ͽ� üũ�� ����.)
//(��) text ������ ��� ������ ����Ǿ� �ִ��� �׷�����.
//(��) ������ ���� ����� ���� ���α׷��� �ۼ��غ��ÿ�. (�� string�� ���� null���ڷ� ������ null���ڴ� '\0���� ǥ���ϸ�, null������ �ƽ�Ű �ڵ尪�� 0�̴�.)

//���� ����
//text�� �޸� ũ��� 30�̴�.
//
//1��° ��Ʈ�� : ABC, �ƽ�Ű �ڵ尪 : 65 66 67
//2��° ��Ʈ�� : abcd, �ƽ�Ű �ڵ尪 : 97 98 99 100
//3��° ��Ʈ�� : Hello, �ƽ�Ű �ڵ尪 : 72 101 108 108 111

/*
#include <stdio.h>
int main(void)
{
	char text[][10] = { "ABC", "abcd", "Hello" };
	int i, j;

	printf("text�� �޸� ũ��� %d�̴�.\n\n", sizeof(text));

	for (i = 0; i < 3; i++)
	{
		printf("%d��° ��Ʈ�� : %s, �ƽ�Ű �ڵ尪 : ", i + 1, text[i]);


		//for (j = 0; j < 10; j++)
			//printf("%d ", text[i][j]);
		//�ڿ� ���ʿ��� 0���� ��µ��� �ʵ��� ��������.

		for (j = 0; text[i][j] != '\0'; j++)
			printf("%d ", text[i][j]);


		printf("\n");
	}
	return 0;
}
*/

//LAB16_4
//������ ���� 2���� �迭�� ���� �Ʒ��� ���ø� ������ ���ÿ�. (��),(��),(��),(��)�� ������ �ڵ��Ͻÿ�.
//int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
//(��) ���� ���� �� �ʱ�ȭ �������� �ʱ�ȭ���� ���� ������Ʈ�� �� ���̰�, �̵� ������Ʈ���� � �͵����� ���غ��ÿ�. test�� �޸� ������ 2���� ���·� �׸��� �׷����ÿ�.
//���� ����
//���� test�� ������Ʈ�� ����մϴ�.
//
//1��° row :	8	7	0
//2��° row :	6	5	0
//3��° row :	1	2	0
//4��° row :	3	4	0

/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j;

	printf("��>\n");
	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d��° row : ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%d ", test[i][j]);
		printf("\n");
	}

	return 0;
}
*/

//(��) �Ʒ��� ���� ������ ������ ����Ͽ� �迭 test�� �� row ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� ����
//���� test�� ������Ʈ�� ����մϴ�.
//
//1��° row :	8	7	-1
//2��° row :	6	5	-1
//3��° row :	1	2	-1
//4��° row :	3	4	-1

/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j;

	printf("��>\n");
	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n");

	for (i = 0; i < 4; i++)
	{
		printf("\n%d��° row : ", i + 1);

		for (j = 0; j < 3; j++)
			printf("%d ", test[i][j]);
	}
	printf("\n");
	
	return 0;
}
*/

//(��) �Ʒ��� ���� ������ for���� ����Ͽ� test �迭���� �ʱ�ȭ ���� ���� 4���� ������Ʈ�� ���� ��� -1�� ��������, �ٽ� �� �� (��)�� �ڵ带 �̿��Ͽ� ����Ͻÿ�.
/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j;

	printf("��>\n");
	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n");

	for (i = 0; i < 4; i++)
	{
		printf("\n%d��° row : ", i + 1);

		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				printf("%d ", test[i][j]);
			else
				printf("-1");
	}
	printf("\n");
	return 0;
}
*/

//(��) ���� (��)�� ������ �Ŀ� test�� ��� ������Ʈ(12��) ���� �հ� �� ����� ����ϴ� ���α׷��� �ۼ��غ��ÿ�.
//for �ݺ����� ������ ������ �߰��Ͽ� ���α׷��� �ϼ��Ͻÿ�.
//��ü �����δ� 32��, ��հ����δ� 2.67�� �����

//������Ʈ�� ����������ÿ�.
//��հ��� �Ҽ��� ���� 2�ڸ������� ����ϸ�, �ݿø��Ͻÿ�.

//���� ����
//��>
//Total is 32.
//Average is 2.67.

/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };

	int i, j, total = 0;
	double avg;

	printf("��>\n");

	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				total += test[i][j];
			else
				//test[i][j] = -1;			#Ʋ��
				//�ʱ�ȭ ���� ���� ������Ʈ�� ���� ��� -1�� ������ ��, �� ���鵵 �����Ͽ� ��հ� ���� ���Ͻÿ�.
				total += -1;

	printf("Total is %d.\n", total);
	avg = (double)total / 12;
	printf("Average is %.2lf.\n", avg);

	return 0;
}
*/

//(��) ���� (��)�� ������ �Ŀ� ������ ���� ����� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//test �迭�� �� row�� �ִ� ������Ʈ �� �ִ밪�� ����϶�.
//��µ� �ִ밪 4���� ���� ����϶�.

//���� ����
//��>
//1��° row������ �ִ밪 : 8
//2��° row������ �ִ밪 : 6
//3��° row������ �ִ밪 : 2
//4��° row������ �ִ밪 : 4
//�ִ밪���� �� : 20

/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j, max, bigsum = 0;

	printf("��>\n");

	for (i = 0; i < 4; i++)
	{
		max = test[i][0];
		for (j = 1; j < 3; j++)
			if (max < test[i][j])
				max = test[i][j];
		printf("%d��° row������ �ִ밪 : %d\n", i + 1, max);
		bigsum += max;
	}
	printf("�ִ밪���� �� : %d\n", bigsum);

	return 0;
}
*/

//(��)(��)(��)(��)(��)�� �ϳ��� ���α׷����� �ۼ��Ͻÿ�.
//���� ����
//��>
//�迭 test�� ������Ʈ�� ����մϴ�.
//
//1��° row :	8	7	0
//2��° row :	6	5	0
//3��° row :	1	2	0
//4��° row :	3	4	0
// 
//��>
//�迭 test�� ������Ʈ�� ����մϴ�.
//
//1��° row :	8	7	-1
//2��° row :	6	5	-1
//3��° row :	1	2	-1
//4��° row :	3	4	-1
//
//��>
//�迭 test�� ������Ʈ�� ����մϴ�.
//
//1��° row :	8	7	-1
//2��° row :	6	5	-1
//3��° row :	1	2	-1
//4��° row :	3	4	-1
//
//��>
//Total is 32.
//Average is 2.67.
//
//��>
//1��° row������ �ִ밪 : 8
//2��° row������ �ִ밪 : 6
//3��° row������ �ִ밪 : 2
//4��° row������ �ִ밪 : 4
//�ִ밪���� �� : 20

//(��)���� ��� ������Ʈ�� ���� 32�� ������ Total�� �����ϰ�, (��)���� �ִ밪�� ���� ���� Bigsum���� �����Ͻÿ�.
/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j, max, total = 0, bigsum = 0;
	double avg;

	printf("��>\n");
	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d��° row : ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%d ", test[i][j]);
		printf("\n");
	}

	printf("\n��>\n");
	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d��° row : ", i + 1);
		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				printf("%d ", test[i][j]);
			else
				printf("-1 ");
		printf("\n");
	}

	printf("\n��>\n");
	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d��° row : ", i + 1);
		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				printf("%d ", test[i][j]);
			else
				printf("-1 ");
		printf("\n");
	}

	printf("\n��>\n");

	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				total += test[i][j];
			else
				total += -1;

	printf("Total is %d.\n", total);
	avg = (double)total / 12;
	printf("Average is %.2lf.\n", avg);

	printf("\n��>\n");

	for (i = 0; i < 4; i++)
	{
		max = test[i][0];
		for (j = 1; j < 3; j++)
			if (max < test[i][j])
				max = test[i][j];
		printf("%d��° row������ �ִ밪 : %d\n", i + 1, max);
		bigsum += max;
	}
	printf("�ִ밪���� �� : %d\n", bigsum);

	return 0;
}
*/

//HW16_1
//�Ʒ��� ���� int�� 2���� �迭�� �����Ͽ�, �� �ȿ� �������� ����� 9�ܱ��� ��������.
//������ ���� ���·� ����Ǿ�� �Ѵ�. �׸��� ���� ����� ����Ǿ����� Ȯ���ϱ� ���ؼ� ������ǥ�� ����� ��,
//����� �Է����� ���ڸ� �о�鿩�� ������ 2���� �迭�� �̿��Ͽ� �ش� �������� ����ϴ� ���α׷��� �ۼ��϶�.

//���� ����
//--������ ǥ�� ������ �����ϴ�.
//  2	4	6	8	10	12	14	16	18
//  3	6	9	12	15	18	21	24	27
//  4	8	12	16	20	24	28	32	36
//  5	10	15	20	25	30	35	40	45
//  6	12	18	24	30	36	42	48	54
//  7	14	21	28	35	42	49	56	63
//  8	16	24	32	40	48	56	64	72
//  9	18	27	36	45	54	63	72	81
//--���ϴ� ��������? 6
//  6	12	18	24	30	36	42	48	54

/*
#include <stdio.h>
int main(void)
{
	int gugudan[9][9] = { 0 };
	int i, j, dan;

	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
			gugudan[i][j] = (i + 2) * (j + 1);

	printf("--������ ǥ�� ������ �����ϴ�.\n");
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
			printf("%3d ", gugudan[i][j]);
		printf("\n");
	}

	printf("--���ϴ� ��������? ");
	scanf_s("%d", &dan);

	for (i = 0; i < 9; i++)
		printf("%3d ", gugudan[dan - 2][i]);
	printf("\n");

	return 0;
}
*/

//HW16_2
//����2�� �迭 A(arr1)�� ����� ���տ� �ʱ�ȭ�ϰ�, �� �迭 A�� ���� ���Թ��� �̿��Ͽ� �迭 B(arr2)�� �迭 C(arr3)�� ���� �־ ����ϴ� ���α׷��� �ۼ��϶�.
//���� ����
//--�迭 A
//  1	2	3	4
//  5	6	7	8
//
//--�迭 B
//  1	5
//  2	6
//  3	7
//  4	8
//
//--�迭 C
//  1	2	3	4	5	6	7	8

/*
#include <stdio.h>
int main(void)
{
	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[4][2];
	int arr3[8];
	int i, j;		//�� �̻��� �ε��� ������ ������� ����.

	//�̵� (����) A -> B
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arr2[j][i] = arr1[i][j];

	//�̵� (����) A -> C
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arr3[i * 4 + j] = arr1[i][j];

	//A, B, C ���
	printf("--�迭 A\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%3d ", arr1[i][j]);
		printf("\n");
	}

	printf("\n--�迭 B\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%3d ", arr2[i][j]);
		printf("\n");
	}

	printf("\n--�迭 C\n");
	for (i = 0; i < 8; i++)
		printf("%3d ", arr3[i]);

	printf("\n");

	return 0;
}
*/

//HW16_3
//4���� �л��� �߰����, �⸻���, ������ ������ �Ʒ��� ���� �迭�� ����Ǿ� �ִ�.
//�̸� �̿��Ͽ� �� �л��� ������ ��纰 ������ ���Ͽ� �c�࿡ ����ϴ� ���α׷����� �����ϼ���.
//������ ��ó�� �Լ��� ������ ���� ���� main�Լ� �ϳ��� ���α׷��϶�.

//(a)����� ���� �Ʒ��� ���� �迭�� �ʱ�ȭ ���� �̸� ����Ѵ�.
//(b)�� �л��� ������ ��纰 ������ ���� �� �̸� ����Ѵ�.

//���� ����
//a>
//	10	15	20	0
//  30  35  20  0
//  60  65  20  0
//  90  95  20  0
//  0   0   0   0
//b>
//  10  15  20  45
//  30  35  20  85
//  60  65  20  145
//  90  95  20  205
//  190 210 80  0

/*
#include <stdio.h>
int main(void)
{
	int gradeTable[5][4] = { {10, 15, 20, 0}, {30, 35, 20, 0}, {60, 65, 20, 0}, {90, 95, 20, 0}, {0, 0, 0, 0} };
	int i, j;

	printf("a>\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d ", gradeTable[i][j]);
		printf("\n");
	}

	printf("\nb>\n");

	//���� ������ ���� ������ ������ �������� ����Ѵ�.
	//�׸��� �� ������ ���ٸ��� 0���� �ʱ�ȭ�Ѵ�.
	for (i = 0; i < 5; i++)
		gradeTable[i][3] = 0;

	for (i = 0; i < 4; i++)
		gradeTable[4][i] = 0;

	//�� �л��� ������ ���Ѵ�.
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			gradeTable[i][3] += gradeTable[i][j];

	//�� ������ ������ ���Ѵ�.
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			gradeTable[4][i] += gradeTable[j][i];

	//����Ѵ�.
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d ", gradeTable[i][j]);
		printf("\n");
	}

	return 0;
}
*/

//LAB16_5
//���� 3, ���� 5�� ���̺� ����(0~99)�� ä���, ��ü�� ����� ����ؼ� ����� �� ���̺��� ����ϴ� ���α׷��� �ۼ��϶�.
//���� ����1 (����ø��� �ٸ� ���� ����)
//�߻��� ������ ����� 50�Դϴ�.
//  96  30  64  33   8
//  31  16  58  39  65
//  59  65  99   2  93

//���� ����2 (����ø��� �ٸ� ���� ����)
//�߻��� ������ ����� 52�Դϴ�.
//  13  56  82  76  16
//  53  92  80  32  10
//  35  50  67  46  78

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 5

int main(void)
{
	int table[ROW][COL];
	int i, j, sum = 0;
	double avg;

	srand(time(NULL));

	for (i = 0; i < ROW; i++)
		for (j = 0; j < COL; j++)
			table[i][j] = rand() % 100;
	for (i = 0; i < ROW; i++)
		for (j = 0; j < COL; j++)
			sum += table[i][j];

	avg = (double)sum / (ROW * COL);

	printf("�߻��� ������ ����� %.0lf�Դϴ�.\n", avg);

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%4d ", table[i][j]);
		printf("\n");
	}

	return 0;
}
*/

//���� ���α׷��� �Ʒ��� ������ �Լ��� ������ �ٽ� �ۼ��϶�. ���࿹�ô� ���� ����.
//initTable: ������ �迭�� �ִ´�.
//totalTable: �� ���� ����Ͽ� ��ȯ�Ѵ�.
//printTable: �迭�� ������ ����Ѵ�.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 5

void initTable(int table[][5], int row);
int totalTable(int table[][5], int row);
void printTable(int table[][5], int row);

int main(void)
{
	int table[3][5];
	int i, j;
	int total = 0;

	srand(time(NULL));

	initTable(table, 3);
	printf("�߻��� ������ ����� %d�Դϴ�.\n", totalTable(table, 3) / 15);

	printTable(table, 3);			//ȣ��

	return 0;
}

void initTable(int table[][5], int row)
{
	int i, j;

	for (i = 0; i < row; i++)
		for (j = 0; j < 5; j++)
			table[i][j] = rand() % 100;
}

int totalTable(int table[][5], int row)
{
	int i, j, sum = 0;

	for (i = 0; i < row; i++)
		for (j = 0; j < 5; j++)
			sum += table[i][j];

	return sum;
}

void printTable(int table[][5], int row)
{
	int i, j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%4d ", table[i][j]);
		printf("\n");
	}
}
