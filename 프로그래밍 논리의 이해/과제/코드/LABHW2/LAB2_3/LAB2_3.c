/*
#include <stdio.h>
int main(void)
{
	int totalMinute, hour, minute;
	printf("Please enter the total minute: ");
	scanf_s("%d", &totalMinute);
	hour = totalMinute / 60;
	minute = totalMinute % 60;
	printf("The total minute %d is %d hours and %d minutes.\n", totalMinute, hour, minute);
}
*/

#include <stdio.h>
int main(void)
{
	int hour, minute;
	int totalMinute = 200;

	hour = totalMinute / 60;
	minute = totalMinute % 60;

	printf("%dºÐ:\n%dh %dm\n", totalMinute, hour, minute);
}