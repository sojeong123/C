// 6��
#include <stdio.h>
int main(void)
{
	int n, k = 0;
	printf("���� n�� �Է��ϼ���: ");
	scanf_s("%d", &n);
	while (1)
	{
		if (n < 2)
			break;
		n /= 2;
		k++;
	}
	printf("�ִ� k��: %d\n", k);
	return 0;
}