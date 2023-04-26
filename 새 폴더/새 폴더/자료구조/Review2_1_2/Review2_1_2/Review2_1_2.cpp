///////////20201012 ��ǻ���а� �Ӽ���///////////
#include <stdio.h>
#include <stdlib.h>
typedef struct Score {
	int midterm;
	int final;
}Score;
void printScore(Score s) {
	printf("�߰���� ������ %d\n", s.midterm);
	printf("�б⸻��� ������ %d\n", s.final);
}
Score biggerScore(Score s1, Score s2) {
	if (s1.midterm + s1.final > s2.midterm + s2.final)
		return s1;
	else
		return s2;
}
Score totalScore(Score s1, Score s2) {
	Score result;
	result.midterm = s1.midterm + s2.midterm;
	result.final = s1.final + s2.final;
	return result;
}
Score* createScore(int m, int f) {
	Score* result;
	result = (Score*)malloc(sizeof(Score));
	result->midterm = m;
	result->final = f;
	return result;
}
void DeleteScore(Score* target) {
	if (target) free(target);
	target = NULL;
}

int main(void) {
	Score s1, s2;
	Score* p3;
	p3 = (Score*)malloc(sizeof(Score));

	s1.midterm = 50; s1.final = 100;
	s2.midterm = 70; s2.final = 70;

	printScore(s1);
	printScore(s2);

	printf("-----------------------------\n");
	printf("���� ������ ���� ����:\n");
	printScore(biggerScore(s1, s2));

	printf("-----------------------------\n");
	printf("�� ������ �� ��:\n");
	printScore(totalScore(s1, s2));

	printf("-----------------------------\n");
	p3 = createScore(100, 100);
	printScore(*p3);

	return 0;
}