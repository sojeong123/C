// 20201012 컴퓨터학과 임소정
// Challenge6b
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* word) {
	int answer = 0;
	int i, j;
	int len = strlen(word);
	int count = 0;
	int sum = 0;

	for (i = 0; i < len; i++) {
		if (word[i] >= '0' && word[i] <= '9') {
			count++;
		}
		else {
			if (count > 0) {
				char* temp = (char*)malloc(sizeof(char) * (count + 1));
				for (j = 0; j < count; j++) {
					temp[j] = word[i - count + j];
				}
				temp[j] = '\0';
				sum += atoi(temp);
				free(temp);
				count = 0;
			}
		}
	}

	if (count > 0) {
		char* temp = (char*)malloc(sizeof(char) * (count + 1));
		for (j = 0; j < count; j++) {
			temp[j] = word[i - count + j];
		}
		temp[j] = '\0';
		sum += atoi(temp);
		free(temp);
		count = 0;
	}

	answer = sum;

	return answer;
}

int main(void)
{
	char word[81];
	int total;

	printf("Enter one word : ");
	scanf("%s", word);
	total = solution(word);
	printf("글자 안의 수의 합은 %d\n", total);

	return 0;

}