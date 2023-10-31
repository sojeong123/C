// 7주차 강의자료
// 포인터는 메모리상의 주소를 가지고 있다.

// Page 1
/*
#include <stdio.h>
int main(void)
{
	int data[5] = { 10, 20, 30, 40, 50 };
	int* p = data;

	printf("%d %u %p\n\n", p, p, p); //A)%d 양수, %u 양수, %p 16진수
	
	printf("%d %d\n", p, *p);		//10
	printf("%d\n", *p++);			//10 후위연산자 : 우선권으로, 나중에 계산하는 것을 선택함.
	printf("%d %d\n\n", p, *p);		//20
	
	p = data; // 다시 첫 번째 요소를 가리키게 한 후
	printf("%d %d\n", p, *p);
	printf("%d\n", (*p)++);			//10
	printf("%d %d\n", p, *p);		//11
}
*/