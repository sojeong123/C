// 7���� �����ڷ�
// �����ʹ� �޸𸮻��� �ּҸ� ������ �ִ�.

// Page 1
/*
#include <stdio.h>
int main(void)
{
	int data[5] = { 10, 20, 30, 40, 50 };
	int* p = data;

	printf("%d %u %p\n\n", p, p, p); //A)%d ���, %u ���, %p 16����
	
	printf("%d %d\n", p, *p);		//10
	printf("%d\n", *p++);			//10 ���������� : �켱������, ���߿� ����ϴ� ���� ������.
	printf("%d %d\n\n", p, *p);		//20
	
	p = data; // �ٽ� ù ��° ��Ҹ� ����Ű�� �� ��
	printf("%d %d\n", p, *p);
	printf("%d\n", (*p)++);			//10
	printf("%d %d\n", p, *p);		//11
}
*/