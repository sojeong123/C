// 5��
#include <stdio.h>
int main(void)
{
	int sec;
	printf("��(Second)�� �Է��ϼ���: ");
	scanf_s("%d", &sec);
	printf("%d�� %d�� %d��\n", sec / 3600, sec % 3600 / 60, sec % 60);
	return 0;
}