//20201012 컴퓨터학과 임소정
#include <stdio.h>
int main(void)
{
	char s[20];
	char key;
	int i, j;
	int isKey = 0;

	scanf_s("%s %c", s, 20, &key, 1);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == key)
		{
			printf("%d\n", i + 1);
			isKey = 1;
			break;
		}
	}
	if (isKey == 0)
		printf("-1");
	return 0;
}