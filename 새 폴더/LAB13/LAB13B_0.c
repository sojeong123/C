#include <stdio.h>
int main(void) 
{
	int i;

	// 1) ���ڿ��� �����ϴ� �������� ������Դϴ�
	char digits[] = "0123456789";
	char abc[] = {'A', 'B', 'C', '\0'};
	char lan[5] = "java";
	
	// 2) ��� �����?
	printf("%s %s\n", digits, abc); //%s�� ����Ѵ�.
	
	// 3) �Ʒ�ó�� lan ���ڿ������� �ΰ��� ������� ����� ���ִ�. %c�� %s�� ���ӻ��� �ָ��϶�.
	printf("%s\n", lan);

	for (i = 0; lan[i] != '\0'; i++) // A)���ڿ��� �������� Ȯ���ϴ� ����� �����غ���
		printf("%c", lan[i]);         

	// 4) digits[]�� �߰��� null character�� �����ϸ�
	digits[6] = '\0';
	printf("\n%s\n", digits);
	
	return 0;
}
