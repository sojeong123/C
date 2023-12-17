// 1
// (포인터)
// 입력으로 받은 문자열 속의 첫 숫자를 출력하는 프로그램을 작성하라.
// 즉, 입력으로 abc123XY를 받으면 1을 출력한다.
// 문자열 속에 숫자가 없는 경우는 'x'를 출력한다.
// 
// 실행 예시
// abc123XY		<-- 입력 : 문자열
// 1			<-- 출력 : 첫 숫자 1
// 
// abcde        <-- 입력 : 문자열
// x			<-- 출력 : 첫 숫자가 없으므로 'x'를 출력한다.

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[20], numStr[20];

	scanf("%s", str);
	printf("%c\n", firstDigit(str));
}

char firstDigit(char* p1)
// firstDigit 함수내에 배열적 표현(p[i])와 *(p+i)같은 표현을 사용하지 않고
// 포인터 산술 연산만을 사용하여 구현한다.
{
	int i = 0;

	while (*(p1 + i) != '\0')
	{
		if (isdigit(*(p1 + i)))
			return *(p1 + i);
		i++;
	}
	return 'x';
}
*/

// 2
// 입력으로 받은 문자열 속의 숫자들을 이어 만든 문자열을 출력하는 프로그램
// 숫자외의 다른 문자는 무시한다.
// 숫자로 된 문자열을 출력할 때 마지막에 end를 같이 출력한다.
// 
// 실행 예시
// abc123XY		<-- 입력 : 문자열
// 123end		<-- 출력 : 1과 2를 이어 만든 문자열
// 
// abc23dEF45$		<-- 입력 : 문자열
// 2345end		<-- 출력 : 2와 3과 4와 5를 이어 만든 문자열

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[20], numStr[20];

	scanf("%s", str);

	extractDigits(str, numStr);
	printf("%send\n", numStr);
}

void extractDigits(char* p1, char* p2)
// extractDigits 함수내에 배열적 표현(p[i])와 *(p+i)같은 표현을 사용하지 않고
// 포인터 산술 연산만을 사용하여 구현한다.
{
	int i = 0, j = 0;

	while (*(p1 + i) != '\0')
	{
		if (isdigit(*(p1 + i)))
		{
			*(p2 + j) = *(p1 + i);
			j++;
		}
		i++;
	}
	*(p2 + j) = '\0';
}
*/

// 3
// (문자열 함수)
// 숫자로만 이루어진 여러개의 문자열들을 하나의 문장 sentence(공백문자 포함)를 입력받아
// 그 문장 내에서 그 문자열의 합을 출력하는 프로그램을 작성하라.
// 
// 실행 예시
// 111 222       <-- 입력 : 하나의 문자으로 읽는다.
// 333			 <-- 출력 : 111과 222의 합
// 
// strtok, strcpy, strcat, atoi 등 필요한 문자열 함수를 사용하면 쉽게 구현할 수 있다.

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	char sentence[50];		// 총 49이하의 문자들로 문장 구성
	char delimiters[] = " ,\n\0"; // 네 개의 분리 문자들(공백, 콤마, 줄바꿈, 널문자) 지정한다.

	fgets(sentence, sizeof(sentence), stdin);	// 공백을 포함한 문장을 입력, 단어들은 모두 숫자로 되었다고 가정한다.
	
	int sum = 0;
	char* token;

	token = strtok(sentence, delimiters);
	while (token != NULL)
	{
		sum += atoi(token);
		token = strtok(NULL, delimiters);
	}

	printf("%d\n", sum);
}
*/

// 4 //미완성
// (문자열 함수)
// 3번을 이용하여 다음과 같이 동작하는 프로그램을 작성하라.
// 숫자로만 이루어진 여러개의 문자열들을 하나의 문장 sentence(공백문자 포함)를 입력받아
// 그 숫자로 이루어진 문자열들을 접합하여 하나의 숫자를 만든 후
// 숫자의 자릿수를 곱한 수를 출력하는 프로그램을 작성하라.
// 
// 실행 예시
// 11 22         <-- 입력 : 하나의 문장으로 읽는다.
// 4488		 	 <-- 출력 : 숫자문자열 11과 22를 접합한 1122에 문자열의 길이 4를 곱한 값
// 
// strtok, strcpy, strcat, atoi 등 필요한 문자열 함수를 사용하면 쉽게 구현할 수 있다.

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	char sentence[50];		// 총 49이하의 문자들로 문장 구성
	char delimiters[] = " ,\n\0"; // 네 개의 분리 문자들(공백, 콤마, 줄바꿈, 널문자) 지정한다.

	fgets(sentence, sizeof(sentence), stdin);	// 공백을 포함한 문장을 입력, 단어들은 모두 숫자로 되었다고 가정한다.

	int sum = 0;
	char* token;

	token = strtok(sentence, delimiters);
	while (token != NULL)
	{
		sum += atoi(token);
		token = strtok(NULL, delimiters);
	}

	printf("%ㄴ\n", sum * strlen(sentence));
}
*/



// 5
// (구조체)
// 학생 정보는 이름, 성적, 학점으로 구성되며, 다음에 제시된 내용을 충족하는 프로그램을 작성하시오.
// 
// 1. 입력받은 학생수만큼의 새로운 학생들(1명이상 20명이하)의 정보(이름, 성적)을 읽어들인 후
// 2. 모든 학생에 대해서 학점을 계산한다.
// 학점은 성적이 50초과인 경우 A, 아니면 F이다.
// 3. 현재까지의 학생들의 정보를 출력한다.
// 
// 실행 예시
// 3		<-- 입력 : 학생수
// ccc 90	<-- 학생의 정보(이름과 성적) 입력
// DDD 50   <-- 학생의 정보(이름과 성적) 입력
// fff 100  <-- 학생의 정보(이름과 성적) 입력
// ccc 90 A	<-- 출력 : 학생의 정보(이름, 성적, 학점)
// DDD 50 F	<-- 출력 : 학생의 정보(이름, 성적, 학점)
// fff 100 A	<-- 출력 : 학생의 정보(이름, 성적, 학점)

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 20
typedef struct {
	char name[20];
	int score;
	char grade;
} Student;

int main(void)
{
	Student students[MAX];
	int i;
	int studentNum;

	scanf("%d", &studentNum);
	for (i = 0; i < studentNum; i++)
		scanf("%s %d", students[i].name, &students[i].score);

	calculateGrade(students, studentNum);		// 학점을 부여한다.

	for (i = 0; i < studentNum; i++)
		printf("%s %d %c\n", students[i].name, students[i].score, students[i].grade);
}

void caculateGrade(Student* m, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (m[i].score > 50)
			m[i].grade = 'A';
		else
			m[i].grade = 'F';
	}
}
*/

// 6
// (구조체)
// 5번의 일부 코드를 함수화하고
// 가장 시험 성적이 높은 학생을 찾아 출력하는 기능을 추가하려 한다.
// 입력받은 학생들 중에 가장 시험 성적이 높은 학생의 정보(이름, 성적, 학점)를 출력한다.
// 최고 시험 성적이 2명 이상일 때는 가장 앞에 있는 학생의 정보를 출력한다.
// 
// 1. main함수에서 호출한 printStudent함수를 정의하라.
// 2. 가장 시험 성적이 높은 학생의 인덱스를 반환하는 함수 bestStudent를 정의하라
// int bestStudent(Student* m, int size);
// 
// 실행 예시
// 3		<-- 입력 : 학생수
// ccc 90	<-- 학생의 정보(이름과 성적) 입력
// DDD 50   <-- 학생의 정보(이름과 성적) 입력
// fff 100  <-- 학생의 정보(이름과 성적) 입력
// fff 100 A	<-- 출력 : 학생의 정보(이름, 성적, 학점)

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 20
// 구조체타입 Student를 작성
typedef struct {
	char name[20];
	int score;
	char grade;
} Student;

int main(void)
{
	Student students[MAX];
	int i;
	int studentNum;

	scanf("%d", &studentNum);
	for (i = 0; i < studentNum; i++)
		scanf("%s %d", students[i].name, &students[i].score);

	calculateGrade(students, studentNum);

	int bestId = bestStudent(students, studentNum);

	printStudent(&students[bestId]);
}

void calculateGrade(Student* m, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (m[i].score > 50)
			m[i].grade = 'A';
		else
			m[i].grade = 'F';
	}
}

void printStudent(Student* m)
{
	printf("%s %d %c\n", m->name, m->score, m->grade);
}

int bestStudent(Student *m, int size)
{
	int i;
	int bestId = 0;

	for (i = 1; i < size; i++)
	{
		if (m[i].score > m[bestId].score)
			bestId = i;
	}
	return bestId;
}
*/

// 7
// (구조체)
// 6번을 다음과 같이 수정하려 한다.
// 1. 한 명에 대한 학생 정보를 입력받는 함수 readStudent를 정의하고
// main 함수에서
// - readStudent 함수를 호출하여 학생 정보를 입력받고
// - 학생정보를 입력받을 때 -1이 나올떄까지 학생(들)의 정보(이름, 성적)를 반복적으로 읽어들인다.
// 
// 2. 학생의 이름을 입력받아서 그 학생의 정보를 찾는 searchStudentByName를 정의하라.
// - 입력받은 이름의 학생이 있으면 학생의 정보(이름, 성적, 학점)을 출력하고,
// - 입력받은 학생이 없는 경우 "not found"를 출력한다.
// - 학생들의 이름은 동일한 것이 없는 것으로 간주한다.
// 
// 실행 예시 1
// 1		<-- 입력 : 정보 입력 진행
// ccc 90	<-- 학생의 정보(이름과 성적) 입력
// 1		<-- 입력 : 정보 입력 진행
// DDD 50   <-- 학생의 정보(이름과 성적) 입력
// 1		<-- 입력 : 정보 입력 진행
// fff 100  <-- 학생의 정보(이름과 성적) 입력
// -1		<-- 입력 : 정보 입력 중단
// ccc      <-- 입력 : 찾을 학생의 이름
// ccc 90 A <-- 출력 : 입력받은 학생의 정보
// 
// 실행 예시 2
// 1		<-- 입력 : 정보 입력 진행
// ccc 90	<-- 학생의 정보(이름과 성적) 입력
// 1		<-- 입력 : 정보 입력 진행
// DDD 50   <-- 학생의 정보(이름과 성적) 입력
// 1		<-- 입력 : 정보 입력 진행
// fff 100  <-- 학생의 정보(이름과 성적) 입력
// -1		<-- 입력 : 정보 입력 중단
// zzz      <-- 입력 : 찾을 학생의 이름
// not found <-- 출력 : 입력받은 학생의 정보
//

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 20
// 구조체타입 Student를 작성
typedef struct {
	char name[20];
	int score;
	char grade;
} Student;

int main(void)
{
	Student students[MAX];
	int i;
	int studentNum;
	int choice;
	char name[20];

	studentNum = 0;
	scanf("%d", &choice);
	while (choice != -1)
	{
		readNewStudent(students, &studentNum);
		scnaf("%d", &choice);
	}

	calculateGrade(students, studentNum);

	int indexSearched = -1;
	// printf("Enter 학생 이름 : ");
	scanf("%s", name);
	for (i = 0; i < studentNum; i++)
		if ((indexSearched = searchStudentByName(students, studentNum, name)) != -1) {
			printStudent(&students[indexSearched]);
			break;
		}
	if (indexSearched == -1)
		printf("not found\n");
}

void printStudent(Student* m)
{
	printf("%s %d %c\n", m->name, m->score, m->grade);
}

void calculateGrade(Student* m, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (m[i].score > 50)
			m[i].grade = 'A';
		else
			m[i].grade = 'F';
	}
}

void readNewStudent(Student* m, int* snPtr)
{
	scanf("%s %d", m[*snPtr].name, &m[*snPtr].score);
	(*snPtr)++;
}

// name이 배열 s에 있으면 그 인덱스를, 아니면 -1을 반환
int searchStudentByName(Student s[], int n, char name[])
{
	int i;

	for (i = 0; i < n; i++)
		if (strcmp(s[i].name, name) == 0)
			return i;
	return -1;
}
*/

// 8
// (구조체)
// 7번과 같이
// 입력받은 학생들 중에 가장 시험 성적이 높은 학생의 정보(이름, 성적, 학점)를 출력하는 코드를 다음과 같이 변경하려 한다.
// 7번과 같이 최고 시험성적이 2명 이상일 때는 앞의 학생의 정보를 출력한다.
// 
// Student 구조체 배열을 멤버로 갖는 구조체타입 CClass를 다음과 같이 정의 한다
// typedef struct cClass {
// int num;
// Student s[40];
// } CClass;
// 
// 1. printStudent함수는 그대로 사용하고
// 2. main함수에서 호출된 다음의 3개의 함수를 정의하여 프로그램을 완성하라.
// - readClass
// - calculateClassGrade
// - calculataeClassBest
// 
// 실행 예시
// 3		<-- 입력 : 학생수
// ccc 90	<-- 학생의 정보(이름과 성적) 입력
// DDD 50   <-- 학생의 정보(이름과 성적) 입력
// fff 100  <-- 학생의 정보(이름과 성적) 입력
// fff 100 A	<-- 출력 : 학생의 정보(이름, 성적, 학점)

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 20
typedef struct {
	char name[20];
	int score;
	char grade;
} Student;

typedef struct cClass {
	int num;
	Student s[40];
} CClass;

int main(void)
{
	CClass cp;
	Student bestStudent;

	scanf("%d", &cp.num);

	readClass(&cp);
	calculateClassGrade(&cp);
	bestStudent = calculateClassBest(&cp);

	printStudent(&bestStudent);
}

void printStudent(Student* m)
{
	printf("%s %d %c\n", m->name, m->score, m->grade);
}

void readClass(CClass* m)
{
	int i;

	for (i = 0; i < m->num; i++)
		scanf("%s %d", m->s[i].name, &m->s[i].score);
}

void calculateClassGrade(CClass* m)
{
	int i;

	for (i = 0; i < m->num; i++)
	{
		if (m->s[i].score > 50)
			m->s[i].grade = 'A';
		else
			m->s[i].grade = 'F';
	}
}

Student calculateClassBest(CClass* m)
{
	int i;
	int bestId = 0;

	for (i = 1; i < m->num; i++)
	{
		if (m->s[i].score > m->s[bestId].score)
			bestId = i;
	}
	return m->s[bestId];
}
*/

// 9
// 오류의 원인이 무엇인가?
// 1. resultLen을 0으로 초기화하지 않았다.
// 2. resultLen을 1씩 증가시키면서 result에 저장하고 있다.
// 3. resultLen을 2씩 증가시키면서 result에 저장해야 한다.

// (문자열)
// 주어진 문자열에 대해서 반복되는 1개의 문자를
// 다음과 같은 방식으로 압축하여 그 문자열과 길이를 출력하는 프로그램을 작성하라.
// 압축원리 : 문자열에서 같은 값이 연속해서 나타나는 것을
// 그 문자와 반복되는 값으로 표현하여 더 짧은 문자열로 줄이려한다.
// 
// 간단한 예로 "aaabccd"의 경우
// "3a2bcd"(문자가 반복되지 않고 한번만 나타난 경우 1은 생략함)이 압축된 문자열이고 그 길이는 6이다.
// 압축된 문자열과 그 길이를 출력한다.
// 
// 실행	예시
// aaabccd		<-- 입력
// 3a2bcd		<-- 출력
// 6			<-- 출력
// 
// aaaaaaaaa    <-- 입력
// 9a			<-- 출력
// 2			<-- 출력
// 
// abcd 		<-- 입력
// abcd			<-- 출력 : 압축된 문자열(반복되는 문자가 없어서 압축되지 않았음)
// 4			<-- 출력 : 압축된 문자열의 길이
// 
// 제한 사항
// 1. 문자열(s)의 길이는 1이상 1000미만이다.
// 2. 문자열(s)은 알파벳 소문자로만 구성되어 있다.
// 3. 중복되는 문자의 개수는 10미만이라고 하자(이는 프로그램을 쉽게 하기 위함이다.).

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char s[1001];

	scanf("%s", s);
	printf("\n%d\n", solution(s));
}

int solution(char* s)
{
	int answer = 0;
	int len = strlen(s);
	int count = 1;
	char* result = (char*)malloc(sizeof(char) * len);

	for (int i = 0; i < len; i++)
	{
		if (s[i] == s[i + 1])
		{
			count++;
		}
		else
		{
			if (count == 1)
			{
				result[answer++] = s[i];
			}
			else
			{
				result[answer++] = count + '0';
				result[answer++] = s[i];
				count = 1;
			}
		}
	}

	printf("%s\n", result);
	printf("%d\n", answer);

	return answer;
}
*/

// 10
// (문자열)
// 9번을 참고하여 다음과 같이 동작하는 프로그램을 작성하라.
// 주어진 문자열에 대해서 앞에서부터 문자 2개의 단위로 잘랐을 때 반복되는 것을 압축하여 표현하여 그 문자열과 길이를 출력하는 프로그램을 작성하라.
// 예를들어 "abababmnxyxy"의 경우, 2개 단위로 잘라서 압축한다면 "3abmn2xy"가 압축된 문자열이고 그 길이는 8이다.
// 
// 실행	예시
// abababxyz 		<-- 입력
// 3abxyz			<-- 출력 : 압축된 문자열 ab/ab/ab/xy/z
// 6				<-- 출력
// 
// aaaa				<-- 입력
// 4aa				<-- 출력 : 압축된 문자열 aa/aa
// 3				<-- 출력
// 
// xabab 			<-- 입력
// xabab				<-- 출력 : 압축된 문자열 x/ab/ab/b
// 5				<-- 출력
// 
// 제한사항
// 1. s의 길이는 1이상 1000미만이다.
// 2. s는 알파벳 소문자로만 구성되어 있다.
// 3. 중복되는 문자의 개수는 10미만이라고 하자(이는 프로그램을 쉽게 하기 위함이다.).


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char s[1001];

	scanf("%s", s);
	printf("\n%d\n", solution2(s));
}

int solution2(char* s)
{
	// 방법 1 
	/*
	int answer = 0;
	int len = strlen(s);
	int count = 1;
	char* result = (char*)malloc(sizeof(char) * len);

	for (int i = 0; i < len; i++)
	{
		if (s[i] == s[i + 1])
		{
			count++;
		}
		else
		{
			if (count == 1)
			{
				result[answer++] = s[i];
			}
			else
			{
				result[answer++] = count + '0';
				result[answer++] = s[i];
				count = 1;
			}
		}
	}

	printf("%s\n", result);
	printf("%d\n", answer);

	return answer;
*/

	// 방법 2
int answer = 0;

int len = strlen(s);
	int count = 1;
	char* result = (char*)malloc(sizeof(char) * len);

	for (int i = 0; i < len; i++)
	{
		if (s[i] == s[i + 1])
		{
			count++;
		}
		else
		{
			if (count == 1)
			{
				result[answer++] = s[i];
			}
			else
			{
				result[answer++] = count + '0';
				result[answer++] = s[i];
				count = 1;
			}
		}
	}

	printf("%s\n", result);
	printf("%d\n", answer);

	return answer;
}


