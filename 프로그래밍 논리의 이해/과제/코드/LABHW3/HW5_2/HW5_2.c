#include <stdio.h>
int main(void)
{
	const float PI = 3.141592;
	int radius;
	double area;
	double circumference;

	printf("Enter a radius: ");
	scanf_s("%d", &radius);

	area = 3.141592 * radius * radius;
	printf("The area of a circle with %d:\t\t%f.\n", radius, area);

	circumference = 2 * PI * radius;
	printf("The circumference of a circle with %d:\t%f.\n", radius, circumference);
}