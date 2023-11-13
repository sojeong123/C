// 강의자료 11주차
// 1
// 구조체 변수 초기화
struct student aStudent = { 19950001, 100, 50 };

// 연습 1-1 : 구조체 멤버 각각에 값 설정
aStudent.id = 19950001
aStudent.midterm = 100;
aStudent.final = 50;

// 연습 1-2 : 구조체 멤버의 값을 입력받는다.
printf("학번 입력:");
scanf("%d", &aStudent.id);

printf("중간고사 성적 입력:");
scanf("%d", &aStudent.midterm);

printf("학기말고사 성적 입력:");
scanf("%d", &Student.final);

// 연습 1-3 : 구조체 멤버의 값을 출력한다.
printf("학번: %d 중간: %d 학기말: %d\n", aStudent.id, aStudent.midterm, aStudent.final)

// 연습 1-4 : 중간고사와 학기말고사 성적을 더해 출력한다.
printf("학번 %d의 총점은 %d이다\n", aStudent.id, aStudent.midterm + aStudent.final );



// 구조체 변수 연습 MORE
구조체명(태그) customer가 이름과 나이를 갖도록 구조체명(태그)를 정의하라.
struct customer {
	char name[20];
	int age;
};

int main(void)
{
	// customer 구조체 변수 aMan과 aWoman을 선언한다.
	struct customer aMan, aWoman;
	
	// aMan에 “에릭”, 35를 넣는다.
	strcpy(aMan.name, "에릭");
		aMan.age = 35;

	// aWoman의 값을 입력받는다.
	printf("여자 고객의 이름은?");
	scanf(“ % s”, aWoman.name); // &를 안붙임에 주의
	
	printf("나이는?");
	scanf(“ % d”, &aWoman.age);

	// aMan을 출력한다. “에릭은 35살이다”
	printf("%s은 % d살이다\n", aMan.name, aMan.age );
}