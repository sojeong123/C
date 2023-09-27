//20201012 컴퓨터학과 임소정
//LAB16_3
#include <stdio.h>
int main(void)
{
	char text[][10] = { "ABC", "abcd", "Hello" };
	int i, j;

	printf("text의 메모리 크기는 %d이다.\n\n", sizeof(text));

	for (i = 0; i < 3; i++)
	{
		printf("%d번째 스트링 : %s, ", i + 1, text[i]);
		printf("아스키 코드값 : ");
		for (j = 0; text[i][j] != '\0'; j++)
			printf("%d ", text[i][j]);

		printf("\n");
	}
}