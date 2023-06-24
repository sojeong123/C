/*****************************************
기말고사5 20201012 컴퓨터학과 1학년 임소정
******************************************/

#include <stdio.h>
int checking(char w0[], char w[])
{

}

int main(void)
{
	char w0[81] = "apple";
	char w1[81], w2[81], w3[81];

	scanf("%s %s %s", w1, w2, w3);

	printf("%d", checking(w0, w1));
	printf("%d", checking(w0, w2));
	printf("%d", checking(w0, w3));
}