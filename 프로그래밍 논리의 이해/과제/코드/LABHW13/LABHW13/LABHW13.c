//LAB13_1
/*
#define SIZE 5
#include <stdio.h>
int main(void)
{
	int arrayA[SIZE] = { 1, 2, 3, 4, 1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i;
	int same;

	//1)2)
	for (i = 0; i < SIZE; i++)
	{
		arrayB[i] = arrayA[i];
		arrayC[i] = arrayA[SIZE - 1 - i];
	}

	//3)
	printf("ArrayA : ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", arrayA[i]);
	printf("\n");

	printf("ArrayB : ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", arrayB[i]);
	printf("\n");

	printf("ArrayC : ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", arrayC[i]);
	printf("\n");

	//4)
	same = 1; //일단 두 배열이 같다고 값을 설정한 후
	//두개의 배열이 같은가 다른가를 체크한다. 다르면 same을 0dmfh tjfwjdgksek.
	for (i = 0; i < SIZE; i++)
	{
		if (arrayA[i] != arrayB[i])
		{
			same = 0;
			break;
		}
	}

	if (same == 1)
		printf("ArrayA와 ArrayB는 같다.\n");
	else
		printf("ArrayA와 ArrayB는 다르다.\n");

	//5) 4)와 유사하게 작성한다.
	same = 1;
	for (i = 0; i < SIZE; i++)
	{
		if (arrayA[i] != arrayC[i])
		{
			same = 0;
			break;
		}
	}

	if (same == 1)
		printf("ArrayA와 ArrayC는 같다.\n");
	else
		printf("ArrayA와 ArrayC는 다르다.\n");

	return 0;
}
*/

//LAB13_2
/*
#define SIZE 12
#include <stdio.h>
int main(void)
{
	int income[SIZE] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int search;
	int i;

	printf("탐색할 수입은? ");
	scanf_s("%d", &search);

	for (i = 0; i < SIZE; i++)
	{
		if (income[i] == search)
		{
			printf("수입 %d를 갖는 첫번째 달은 %d월입니다.\n", search, i + 1);
			break;
		}
	}

	if (i == SIZE)
		printf("수입 %d를 갖는 달은 없습니다.\n", search);

	return 0;
}
*/

//LAB13_3
/*
#define SIZE 10
#include <stdio.h>
int main(void)
{
	int odd[SIZE], even[SIZE];
	int num;
	int i, oddIndex = 0, evenIndex = 0;

	for (i = 0; i < SIZE; i++)
	{
		printf("Enter a number : ");
		scanf_s("%d", &num);

		//num이 짝수이면 even에 홀수이면 odd에 넣는다. 각각 인덱스를 사용한다.
		if (num % 2 == 0)
			even[evenIndex++] = num;
		else
			odd[oddIndex++] = num;
	}

	//A)
	printf("\n홀수 출력 :");
	for (i = 0; i < oddIndex; i++)
		printf(" %d", odd[i]);

	//B)
	printf("\n짝수 출력 :");
	for (i = 0; i < evenIndex; i++)
		printf(" %d", even[i]);

	printf("\n");
	return 0;
}
*/

//LAB13_5
/*
#include <stdio.h>
int main() {
	int num;
	int binary[8]; // 2진수를 저장할 배열

	printf("Enter 양수(<256): ");
	scanf_s("%d", &num);

	// 10진수를 2진수로 변환하여 배열에 저장
	int i = 0;
	while (num > 0) {
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	// 배열을 역순으로 출력
	printf("");
	for (int j = i - 1; j >= 0; j--) {
		printf("%d", binary[j]);
	}
	printf("\n");

	return 0;
}
*/

//LAB13B_0
/*
#include <stdio.h>
int main(void)
{
	int i;

	//1) 문자열을 정의하는 여러가지 방법들입니다.
	char digits[] = "0123456789";
	char abc[] = {'A', 'B', 'C', '\0'};
	char lan[5] = "java";

	//2) 출력 결과는?
	printf("%s %s\n", digits, abc);		//%s를 사용한다.
	
	//3) 아래처럼 lan 문자열변수를 2가지 방법으로 출력할 수 있다.
	//%c와 %s의 쓰임새에 주목하라
	printf("%s\n", lan);

	for (i = 0; lan[i] != '\0'; i++) // A)문자열의 마지막을 확인하는 방법을 유의해보라
		printf("%c", lan[i]);

	// 4) digits[]의 중간에 null character를 삽입하면
	digits[6] = '\0';
	printf("\n%s\n", digits);
	return 0;
}
*/

//LAB13B_a
//단계 1
/*
#include <stdio.h>
int main(void)
{
	char word[11];

	printf("Enter a word(<= 10 chars) : ");
	scanf_s("%s", word, sizeof(word));

	printf("%s\n", word);

	return 0;
}
*/

//단계 2
/*
#include <stdio.h>
int main(void)
{
	char word[11];
	int i;

	printf("Enter a word(<= 10 chars) : ");
	scanf_s("%s", word, sizeof(word));

	for (i = 0; word[i] != '\0'; i++)
		printf("%c ", word[i]);

	printf("\n");

	return 0;
}
*/

//단계 3
/*
#include <stdio.h>
int main(void)
{
	char word[11];
	int i;

	printf("Enter a word(<= 10 chars) : ");
	scanf_s("%s", word, sizeof(word));

	for (i = 0; word[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			printf("%c", word[i]);
	}

	printf("\n");

	return 0;
}
*/

//LAB13B_1_1
//단계 1
/*
#include <stdio.h>
int main(void)
{
	//필요한 변수
	char s[81];
	int i;

	//문자열 변수 입력
	printf("Enter a string : ");
	scanf_s("%s", s, sizeof(s));

	//문자열 변수의 길이를 센다. (for문 이용)
	for (i = 0; s[i] != '\0'; i++);

	//길이를 출력한다.
	printf("길이는 %d.\n", i);

	return 0;
}
*/

//단계 2
/*
#include <stdio.h>
int main(void)
{
	//필요한 변수
	char s[81];
	int i;

	//문자열 변수 입력
	printf("Enter a string : ");
	scanf_s("%s", s, sizeof(s));

	//문자열 변수의 길이를 센다. (for문 이용)
	for (i = 0; s[i] != '\0'; i++);

	//길이를 출력한다.
	printf("길이는 %d.\n", i);

	//거꾸로 출력한다.
	for (i = i - 1; i >= 0; i--)
		printf("%c\n", s[i]);

	return 0;
}
*/

//LAB13B_1_2
//palindrome 만들기 준비
/*
#include <stdio.h>
int main(void)
{
	int i;
	char ch;
	char str[10] = "abcde";		//1)

	printf("--변경 전 문자열--\n");
	printf("%s\n", str);

	//문자열 변경
	for (i = 0; i < 2; i++) // 2)
	{
		ch = str[4 - i]; // 3)
		str[4 - i] = str[i]; // 4)
		str[i] = ch;
	}

	printf("\n--변경 후 문자열--\n");
	printf("%s \n", str);
	return 0;
}
*/

//단계 2
/*
#include <stdio.h>
int main(void)
{
	int i;
	char ch;
	char str[10] = "12345678";		//1)

	printf("--변경 전 문자열--\n");
	printf("%s\n", str);

	//문자열 변경
	for (i = 0; i < 4; i++) // 2)
	{
		ch = str[7 - i]; // 3)
		str[7 - i] = str[i]; // 4)
		str[i] = ch;
	}

	printf("\n--변경 후 문자열--\n");
	printf("%s \n", str);
	return 0;
}
*/

//LAB13B_2_1
/*
#include <stdio.h>
int main(void)
{
	//필요한 변수
	char s[81];
	int i;

	//문자열 변수 입력
	printf("Enter a string : ");
	scanf_s("%s", s, sizeof(s));

	//문자열 변수안 문자를 하나씩 처리하면서 대문자 알파벳이면 출력한다. 
	//대문자 알파벳인가를 판별하기 위해서 ASCII 값을 이용한다.
	//문자 ‘A’와 문자 ‘Z’의 ASCI값은 각각 65, 90이다.
	//즉, 65이상 90이하이면 대문자 알파벳임을 알 수 있다.

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
			printf("%c\n", s[i]);
	}

	return 0;
}
*/

//LAB13B_2_2
/*
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	int i, j = 0;

	printf("Enter a word : ");
	scanf_s("%s", word, sizeof(word));

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 65 && word[i] <= 90)
		{
			newWord[j] = word[i];
			j++;
		}
	}

	newWord[j] = '\0';

	printf("%s\n", newWord);

	return 0;
}
*/

//HW13B_1
/*
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	int i, j = 0;

	printf("Enter one word : ");
	scanf_s("%s", word, sizeof(word));

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 65 && word[i] <= 90)
		{
			newWord[j] = word[i] + 32;
			j++;
		}
		else if (word[i] >= 97 && word[i] <= 122)
		{
			newWord[j] = word[i] - 32;
			j++;
		}
		else
		{
			newWord[j] = word[i];
			j++;
		}
	}

	newWord[j] = '\0';

	printf("word given : %s\n", word);
	printf("new word : %s\n", newWord);

	return 0;
}
*/

//HW13B_2
/*
#include <stdio.h>
int main(void)
{
	char word[81];
	int i, sum = 0;

	printf("Enter one word : ");
	scanf_s("%s", word, sizeof(word));

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 48 && word[i] <= 57)
		{
			sum += word[i] - 48;
		}
	}

	printf("안에 있는 숫자들의 합은 %d.\n", sum);

	return 0;
}
*/

//HW13B_3
/*
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	//필요한 변수 선언
	int i, j = 0;

	//문자열 변수 입력
	printf("Enter one word : ");
	scanf_s("%s", word, sizeof(word));

	//문자열을 거꾸로 출력
	for (i = 0; word[i] != '\0'; i++)
	{
		newWord[i] = word[4 - i];
	}
	newWord[i] = '\0';

	printf("The reversed word is %s.\n", newWord);

	return 0;
}
*/

//challenge 13a
/*
#include <stdio.h>
int main(void)
{
	char word1[81], word2[81];
	int i, j = 0;

	printf("Enter the first word : ");
	scanf_s("%s", word1, sizeof(word1));

	printf("Enter the second word : ");
	scanf_s("%s", word2, sizeof(word2));

	for (i = 0; word1[i] != '\0'; i++)
	{
		if (word1[i] != word2[i])
		{
			printf("두 단어는 다르다.\n");
			return 0;
		}
	}

	printf("두 단어는 같다.\n");

	return 0;
}
*/

//challenge 13b
//실패 코드
/*
#include <stdio.h>
int main(void)
{
	char word[81];
	int i, sum = 0;

	printf("Enter a word : ");
	scanf_s("%s", word, sizeof(word));

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 48 && word[i] <= 57)
		{
			sum += word[i] - 48;
		}
	}

	printf("글자 안의 수의 합은 %d.\n", sum);

	return 0;
}
*/

//실패요인//
/*
위의 코드에 "ab22c3d5"를 입력하면 2+2+3+5=12이 나오는데
이는 2+2+3+5=12이 아니라 22+3+5=30가 되어야 한다.

이를 해결하기 위해서는
1. 숫자가 연이어 나올 경우 하나의 수로 간주한다.
2. 숫자가 연이어 나올 경우 10을 곱해주어야 한다.

이 두 가지를 해결해야 한다.
*/

//성공 코드
/*
#include <stdio.h>
int main(void)
{
	char word[81];
	int i, sum = 0;

	printf("Enter a word : ");
	scanf_s("%s", word, sizeof(word));

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 48 && word[i] <= 57)
		{
			sum += word[i] - 48;
			if (word[i + 1] >= 48 && word[i + 1] <= 57)
			{
				sum *= 10;
			}
		}
	}

	printf("글자 안의 수의 합은 %d.\n", sum);

	return 0;
}
*/

//challenge 13c
/*
#include <stdio.h>
int main(void)
{
	char word[81];
	int i, a = 0, e = 0, i1 = 0, o = 0, u = 0;

	printf("문자열 입력 (문자수 81이하) : ");
	scanf_s("%s", word, sizeof(word));

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] == 'a' || word[i] == 'A')
		{
			a++;
		}
		else if (word[i] == 'e' || word[i] == 'E')
		{
			e++;
		}
		else if (word[i] == 'i' || word[i] == 'I')
		{
			i1++;
		}
		else if (word[i] == 'o' || word[i] == 'O')
		{
			o++;
		}
		else if (word[i] == 'u' || word[i] == 'U')
		{
			u++;
		}
	}

	printf("a or A : %d개\n", a);
	printf("e or E : %d개\n", e);
	printf("i or I : %d개\n", i1);
	printf("o or O : %d개\n", o);
	printf("u or U : %d개\n", u);

	return 0;
}
*/