#include <stdio.h>
int main(void)
{
	int hour, minute, TotalMinutes;
	printf("Enter hour: ");
	scanf_s("%d", &hour);

	printf("Enter minute: ");
	scanf_s("%d", &minute);

	TotalMinutes = hour * 60 + minute;
	printf("Total %d minutes\n", TotalMinutes);
}