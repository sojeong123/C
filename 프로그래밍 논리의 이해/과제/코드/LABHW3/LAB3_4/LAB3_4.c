#include <stdio.h>
int main(void)
{
	int base, height, area;
	printf("�غ��� ���̸� �Է��ϼ���: ");
	scanf_s("%d %d", &base, &height);
	
	area = base * height / 2;
	printf("�غ��� ���̰� ���� %d�� %d�� �ﰢ���� ���̴� %d�Դϴ�.\n", base, height, area);
}