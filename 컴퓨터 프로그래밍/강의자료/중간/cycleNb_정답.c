#include <stdio.h>
int get_cycle_number (int n)
{
	//printf("%3d", n);
    if ( n == 1 ) return 1;
    else if ( n % 2 == 0 )
        return 1 + get_cycle_number ( n /2 );
    else
        return 1 + get_cycle_number ( 3 * n + 1 );
}

int main(void)
{
	int num;
	//printf("Enter a number:");
	scanf("%d", &num);

	printf("%d\n", get_cycle_number(num));
}
