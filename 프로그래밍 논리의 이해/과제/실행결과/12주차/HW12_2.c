//20201012 컴퓨터학과 임소정
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num, i;
	int sum = 0;
	int rand_num;

	printf("Enter the number of random numbers (<= 100): ");
	scanf_s("%d", &num);

	srand(time(NULL));

	for (i = 0; i < num; i++) {
		rand_num = rand() % 100; 
		sum += rand_num;
	}

	printf("난수의 평균은 %d.\n", sum / num);
	printf("발생된 난수는\n");

	for (i = 0; i < num; i++) {
		rand_num = rand() % 100;  
		printf("%5d", rand_num);

		if ((i + 1) % 5 == 0) {  
			printf("\n");
		}
	}

	return 0;
}