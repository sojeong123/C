#include <stdio.h>
int main(void)
{
	int base, height, area, width, circumference;
	printf("�غ��� ���̸� �Է��ϼ���: ");
	scanf_s("%d %d", &base, &height);

	area = base * height / 2;
	printf("�غ��� ���̰� ���� %d�� %d�� �ﰢ���� ���̴� %d�Դϴ�.\n", base, height, area);

	printf("���簢���� ���ο� ���̸� �Է��ϼ���: ");
	scanf_s("%d %d", &width, &height);

	circumference = 2 * (width + height);
	printf("���ο� ���̰� ���� %d�� %d�� ���簢���� �ѷ��� %d�� ���̴� %d�Դϴ�.\n", width, height, circumference, width * height);
}