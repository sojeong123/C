// 1
// (������)
// �Է����� ���� ���ڿ� ���� ù ���ڸ� ����ϴ� ���α׷��� �ۼ��϶�.
// ��, �Է����� abc123XY�� ������ 1�� ����Ѵ�.
// ���ڿ� �ӿ� ���ڰ� ���� ���� 'x'�� ����Ѵ�.
// 
// ���� ����
// abc123XY		<-- �Է� : ���ڿ�
// 1			<-- ��� : ù ���� 1
// 
// abcde        <-- �Է� : ���ڿ�
// x			<-- ��� : ù ���ڰ� �����Ƿ� 'x'�� ����Ѵ�.

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
// firstDigit �Լ����� �迭�� ǥ��(p[i])�� *(p+i)���� ǥ���� ������� �ʰ�
// ������ ��� ���길�� ����Ͽ� �����Ѵ�.
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
// �Է����� ���� ���ڿ� ���� ���ڵ��� �̾� ���� ���ڿ��� ����ϴ� ���α׷�
// ���ڿ��� �ٸ� ���ڴ� �����Ѵ�.
// ���ڷ� �� ���ڿ��� ����� �� �������� end�� ���� ����Ѵ�.
// 
// ���� ����
// abc123XY		<-- �Է� : ���ڿ�
// 123end		<-- ��� : 1�� 2�� �̾� ���� ���ڿ�
// 
// abc23dEF45$		<-- �Է� : ���ڿ�
// 2345end		<-- ��� : 2�� 3�� 4�� 5�� �̾� ���� ���ڿ�

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
// extractDigits �Լ����� �迭�� ǥ��(p[i])�� *(p+i)���� ǥ���� ������� �ʰ�
// ������ ��� ���길�� ����Ͽ� �����Ѵ�.
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
// (���ڿ� �Լ�)
// ���ڷθ� �̷���� �������� ���ڿ����� �ϳ��� ���� sentence(���鹮�� ����)�� �Է¹޾�
// �� ���� ������ �� ���ڿ��� ���� ����ϴ� ���α׷��� �ۼ��϶�.
// 
// ���� ����
// 111 222       <-- �Է� : �ϳ��� �������� �д´�.
// 333			 <-- ��� : 111�� 222�� ��
// 
// strtok, strcpy, strcat, atoi �� �ʿ��� ���ڿ� �Լ��� ����ϸ� ���� ������ �� �ִ�.

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	char sentence[50];		// �� 49������ ���ڵ�� ���� ����
	char delimiters[] = " ,\n\0"; // �� ���� �и� ���ڵ�(����, �޸�, �ٹٲ�, �ι���) �����Ѵ�.

	fgets(sentence, sizeof(sentence), stdin);	// ������ ������ ������ �Է�, �ܾ���� ��� ���ڷ� �Ǿ��ٰ� �����Ѵ�.
	
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

// 4 //�̿ϼ�
// (���ڿ� �Լ�)
// 3���� �̿��Ͽ� ������ ���� �����ϴ� ���α׷��� �ۼ��϶�.
// ���ڷθ� �̷���� �������� ���ڿ����� �ϳ��� ���� sentence(���鹮�� ����)�� �Է¹޾�
// �� ���ڷ� �̷���� ���ڿ����� �����Ͽ� �ϳ��� ���ڸ� ���� ��
// ������ �ڸ����� ���� ���� ����ϴ� ���α׷��� �ۼ��϶�.
// 
// ���� ����
// 11 22         <-- �Է� : �ϳ��� �������� �д´�.
// 4488		 	 <-- ��� : ���ڹ��ڿ� 11�� 22�� ������ 1122�� ���ڿ��� ���� 4�� ���� ��
// 
// strtok, strcpy, strcat, atoi �� �ʿ��� ���ڿ� �Լ��� ����ϸ� ���� ������ �� �ִ�.

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	char sentence[50];		// �� 49������ ���ڵ�� ���� ����
	char delimiters[] = " ,\n\0"; // �� ���� �и� ���ڵ�(����, �޸�, �ٹٲ�, �ι���) �����Ѵ�.

	fgets(sentence, sizeof(sentence), stdin);	// ������ ������ ������ �Է�, �ܾ���� ��� ���ڷ� �Ǿ��ٰ� �����Ѵ�.

	int sum = 0;
	char* token;

	token = strtok(sentence, delimiters);
	while (token != NULL)
	{
		sum += atoi(token);
		token = strtok(NULL, delimiters);
	}

	printf("%��\n", sum * strlen(sentence));
}
*/



// 5
// (����ü)
// �л� ������ �̸�, ����, �������� �����Ǹ�, ������ ���õ� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// 
// 1. �Է¹��� �л�����ŭ�� ���ο� �л���(1���̻� 20������)�� ����(�̸�, ����)�� �о���� ��
// 2. ��� �л��� ���ؼ� ������ ����Ѵ�.
// ������ ������ 50�ʰ��� ��� A, �ƴϸ� F�̴�.
// 3. ��������� �л����� ������ ����Ѵ�.
// 
// ���� ����
// 3		<-- �Է� : �л���
// ccc 90	<-- �л��� ����(�̸��� ����) �Է�
// DDD 50   <-- �л��� ����(�̸��� ����) �Է�
// fff 100  <-- �л��� ����(�̸��� ����) �Է�
// ccc 90 A	<-- ��� : �л��� ����(�̸�, ����, ����)
// DDD 50 F	<-- ��� : �л��� ����(�̸�, ����, ����)
// fff 100 A	<-- ��� : �л��� ����(�̸�, ����, ����)

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

	calculateGrade(students, studentNum);		// ������ �ο��Ѵ�.

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
// (����ü)
// 5���� �Ϻ� �ڵ带 �Լ�ȭ�ϰ�
// ���� ���� ������ ���� �л��� ã�� ����ϴ� ����� �߰��Ϸ� �Ѵ�.
// �Է¹��� �л��� �߿� ���� ���� ������ ���� �л��� ����(�̸�, ����, ����)�� ����Ѵ�.
// �ְ� ���� ������ 2�� �̻��� ���� ���� �տ� �ִ� �л��� ������ ����Ѵ�.
// 
// 1. main�Լ����� ȣ���� printStudent�Լ��� �����϶�.
// 2. ���� ���� ������ ���� �л��� �ε����� ��ȯ�ϴ� �Լ� bestStudent�� �����϶�
// int bestStudent(Student* m, int size);
// 
// ���� ����
// 3		<-- �Է� : �л���
// ccc 90	<-- �л��� ����(�̸��� ����) �Է�
// DDD 50   <-- �л��� ����(�̸��� ����) �Է�
// fff 100  <-- �л��� ����(�̸��� ����) �Է�
// fff 100 A	<-- ��� : �л��� ����(�̸�, ����, ����)

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 20
// ����üŸ�� Student�� �ۼ�
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
// (����ü)
// 6���� ������ ���� �����Ϸ� �Ѵ�.
// 1. �� �� ���� �л� ������ �Է¹޴� �Լ� readStudent�� �����ϰ�
// main �Լ�����
// - readStudent �Լ��� ȣ���Ͽ� �л� ������ �Է¹ް�
// - �л������� �Է¹��� �� -1�� ���Ë����� �л�(��)�� ����(�̸�, ����)�� �ݺ������� �о���δ�.
// 
// 2. �л��� �̸��� �Է¹޾Ƽ� �� �л��� ������ ã�� searchStudentByName�� �����϶�.
// - �Է¹��� �̸��� �л��� ������ �л��� ����(�̸�, ����, ����)�� ����ϰ�,
// - �Է¹��� �л��� ���� ��� "not found"�� ����Ѵ�.
// - �л����� �̸��� ������ ���� ���� ������ �����Ѵ�.
// 
// ���� ���� 1
// 1		<-- �Է� : ���� �Է� ����
// ccc 90	<-- �л��� ����(�̸��� ����) �Է�
// 1		<-- �Է� : ���� �Է� ����
// DDD 50   <-- �л��� ����(�̸��� ����) �Է�
// 1		<-- �Է� : ���� �Է� ����
// fff 100  <-- �л��� ����(�̸��� ����) �Է�
// -1		<-- �Է� : ���� �Է� �ߴ�
// ccc      <-- �Է� : ã�� �л��� �̸�
// ccc 90 A <-- ��� : �Է¹��� �л��� ����
// 
// ���� ���� 2
// 1		<-- �Է� : ���� �Է� ����
// ccc 90	<-- �л��� ����(�̸��� ����) �Է�
// 1		<-- �Է� : ���� �Է� ����
// DDD 50   <-- �л��� ����(�̸��� ����) �Է�
// 1		<-- �Է� : ���� �Է� ����
// fff 100  <-- �л��� ����(�̸��� ����) �Է�
// -1		<-- �Է� : ���� �Է� �ߴ�
// zzz      <-- �Է� : ã�� �л��� �̸�
// not found <-- ��� : �Է¹��� �л��� ����
//

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 20
// ����üŸ�� Student�� �ۼ�
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
	// printf("Enter �л� �̸� : ");
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

// name�� �迭 s�� ������ �� �ε�����, �ƴϸ� -1�� ��ȯ
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
// (����ü)
// 7���� ����
// �Է¹��� �л��� �߿� ���� ���� ������ ���� �л��� ����(�̸�, ����, ����)�� ����ϴ� �ڵ带 ������ ���� �����Ϸ� �Ѵ�.
// 7���� ���� �ְ� ���輺���� 2�� �̻��� ���� ���� �л��� ������ ����Ѵ�.
// 
// Student ����ü �迭�� ����� ���� ����üŸ�� CClass�� ������ ���� ���� �Ѵ�
// typedef struct cClass {
// int num;
// Student s[40];
// } CClass;
// 
// 1. printStudent�Լ��� �״�� ����ϰ�
// 2. main�Լ����� ȣ��� ������ 3���� �Լ��� �����Ͽ� ���α׷��� �ϼ��϶�.
// - readClass
// - calculateClassGrade
// - calculataeClassBest
// 
// ���� ����
// 3		<-- �Է� : �л���
// ccc 90	<-- �л��� ����(�̸��� ����) �Է�
// DDD 50   <-- �л��� ����(�̸��� ����) �Է�
// fff 100  <-- �л��� ����(�̸��� ����) �Է�
// fff 100 A	<-- ��� : �л��� ����(�̸�, ����, ����)

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
// ������ ������ �����ΰ�?
// 1. resultLen�� 0���� �ʱ�ȭ���� �ʾҴ�.
// 2. resultLen�� 1�� ������Ű�鼭 result�� �����ϰ� �ִ�.
// 3. resultLen�� 2�� ������Ű�鼭 result�� �����ؾ� �Ѵ�.

// (���ڿ�)
// �־��� ���ڿ��� ���ؼ� �ݺ��Ǵ� 1���� ���ڸ�
// ������ ���� ������� �����Ͽ� �� ���ڿ��� ���̸� ����ϴ� ���α׷��� �ۼ��϶�.
// ������� : ���ڿ����� ���� ���� �����ؼ� ��Ÿ���� ����
// �� ���ڿ� �ݺ��Ǵ� ������ ǥ���Ͽ� �� ª�� ���ڿ��� ���̷��Ѵ�.
// 
// ������ ���� "aaabccd"�� ���
// "3a2bcd"(���ڰ� �ݺ����� �ʰ� �ѹ��� ��Ÿ�� ��� 1�� ������)�� ����� ���ڿ��̰� �� ���̴� 6�̴�.
// ����� ���ڿ��� �� ���̸� ����Ѵ�.
// 
// ����	����
// aaabccd		<-- �Է�
// 3a2bcd		<-- ���
// 6			<-- ���
// 
// aaaaaaaaa    <-- �Է�
// 9a			<-- ���
// 2			<-- ���
// 
// abcd 		<-- �Է�
// abcd			<-- ��� : ����� ���ڿ�(�ݺ��Ǵ� ���ڰ� ��� ������� �ʾ���)
// 4			<-- ��� : ����� ���ڿ��� ����
// 
// ���� ����
// 1. ���ڿ�(s)�� ���̴� 1�̻� 1000�̸��̴�.
// 2. ���ڿ�(s)�� ���ĺ� �ҹ��ڷθ� �����Ǿ� �ִ�.
// 3. �ߺ��Ǵ� ������ ������ 10�̸��̶�� ����(�̴� ���α׷��� ���� �ϱ� �����̴�.).

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
// (���ڿ�)
// 9���� �����Ͽ� ������ ���� �����ϴ� ���α׷��� �ۼ��϶�.
// �־��� ���ڿ��� ���ؼ� �տ������� ���� 2���� ������ �߶��� �� �ݺ��Ǵ� ���� �����Ͽ� ǥ���Ͽ� �� ���ڿ��� ���̸� ����ϴ� ���α׷��� �ۼ��϶�.
// ������� "abababmnxyxy"�� ���, 2�� ������ �߶� �����Ѵٸ� "3abmn2xy"�� ����� ���ڿ��̰� �� ���̴� 8�̴�.
// 
// ����	����
// abababxyz 		<-- �Է�
// 3abxyz			<-- ��� : ����� ���ڿ� ab/ab/ab/xy/z
// 6				<-- ���
// 
// aaaa				<-- �Է�
// 4aa				<-- ��� : ����� ���ڿ� aa/aa
// 3				<-- ���
// 
// xabab 			<-- �Է�
// xabab				<-- ��� : ����� ���ڿ� x/ab/ab/b
// 5				<-- ���
// 
// ���ѻ���
// 1. s�� ���̴� 1�̻� 1000�̸��̴�.
// 2. s�� ���ĺ� �ҹ��ڷθ� �����Ǿ� �ִ�.
// 3. �ߺ��Ǵ� ������ ������ 10�̸��̶�� ����(�̴� ���α׷��� ���� �ϱ� �����̴�.).


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
	// ��� 1 
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

	// ��� 2
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


