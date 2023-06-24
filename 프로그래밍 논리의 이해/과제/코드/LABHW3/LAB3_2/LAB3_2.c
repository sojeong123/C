#include <stdio.h>
int main(void)
{
	int totalMinutes, hours, minutes;

	printf("Enter the total minutes: ");
	scanf_s("%d", &totalMinutes);

	hours = totalMinutes / 60;
	minutes = totalMinutes % 60;

	printf("%d minutes\n%dh %dm\n", totalMinutes, hours, minutes);
}