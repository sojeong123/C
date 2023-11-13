// 20201012 컴퓨터학과 임소정
// LAB9_4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char fullName[50];
	char lastName[50] = "Pak";
	char firstName[50] = "Suehee";

	char id[15] = "630826-2020222"; // 14 개의 문자 + '\0'
	char idFront[7];

	// fullName = "," 그리고 이름을 넣는다.
	strcpy(fullName, lastName);
	strcat(fullName, ", ");
	strcat(fullName, firstName);
	printf("당신의 fullname은 %s\n", fullName);

	// idFront에 주민등록번호의 앞 6자리를 넣는다.
	strncpy(idFront, id, 6);
	idFront[6] = '\0';
	printf("주민등록번호 앞자리는 %s\n", idFront);
}