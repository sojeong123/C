#include <stdio.h>
int main(void)
{
	int totalSeconds, hour, minute, second;

	printf("Enter total seconds: ");
	scanf_s("%d", &totalSeconds);

	printf("---Calculation Result---\n");

	hour = totalSeconds / 3600;
	minute = (totalSeconds % 3600) / 60;
	second = (totalSeconds % 3600) % 60;

	printf("%d seconds\n", totalSeconds);
	printf("%dh %dm %ds\n", hour, minute, second);
}