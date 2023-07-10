//20201012 컴퓨터학과 임소정
//HW13B_3
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	//필요한 변수 선언
	int i, j = 0;

	//문자열 변수 입력
	printf("Enter one word : ");
	scanf_s("%s", word, sizeof(word));

	//문자열을 거꾸로 출력
	for (i = 0; word[i] != '\0'; i++)
	{
		newWord[i] = word[4 - i];
	}
	newWord[i] = '\0';

	printf("The reversed word is %s.\n", newWord);

	return 0;
}