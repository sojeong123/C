#include <stdio.h>
int main(void)
{
	int hour, minute;
	int totalMinute = 200;

	hour = totalMinute / 60;
	minute = totalMinute % 60;

	printf("%dºÐ:\n%dh %dm\n", totalMinute, hour, minute);
}