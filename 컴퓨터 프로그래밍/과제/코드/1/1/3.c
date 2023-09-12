//20201012 컴퓨터학과 임소정
#include <stdio.h>
int main(void)
{
	int n;
	int i, j;
	int score[20];
	int key;

	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &score[i]);
	scanf_s("%d", &key);

	for (i = 0; i < n; i++)
	{
		if (score[i] < key)
			printf("%d ", score[i]);
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		if (score[i] >= key)
			printf("%d ", score[i]);
	}
	return 0;
}