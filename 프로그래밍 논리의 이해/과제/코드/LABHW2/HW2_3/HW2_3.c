#include <stdio.h>
int main(void)
{
	int hour, minute, second;
	int totalSecond = 14000;

	hour = totalSecond / 3600;
	minute = (totalSecond % 3600) / 60;
	second = (totalSecond % 3600) % 60;

	printf("%d seconds:\n%dh %dm %ds\n", totalSecond, hour, minute, second);
}