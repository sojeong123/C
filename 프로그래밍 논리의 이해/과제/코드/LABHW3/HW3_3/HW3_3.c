#include <stdio.h>
int main(void)
{
	int totalSeconds, hour, minute, second;

	printf("Enter h m s: ");
	scanf_s("%d %d %d", &hour, &minute, &second);

	printf("---Calculation Result---\n");

	totalSeconds = hour * 3600 + minute * 60 + second;

	printf("Total %d seconds\n", totalSeconds);
}