//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int coffe_machine(int button)
//{
//	printf("# 1. (자동으로) 뜨거운 물을 준비한다.");
//	printf("# 2. (자동으로) 종이컵을 준비한다.");
//
//	switch(coffee)
//	{
//		//if coffee = 1
//	case = 1: printf("# 3. (자동으로) 보통커피를 탄다. \n"); break;
//	case = 2: printf("# 3. (자동으로) 설탕커피를 탄다. \n"); break;
//	case = 3: printf("# 3. (자동으로) 블랙커피를 탄다. \n"); break;
//	default: printf("# 3. (자동으로) 아무거나 탄다. \n"); break;
//	}
//}
//
//printf("# 4. (자동으로) 물을 붓는다. \n");
//printf("# 5. (자동으로) 스푼으로 저어서 녹인다. \n\n");
//
//return 0;
//
//void main ()
//{
//	int coffee;
//	int ret;
//
//	printf("a님, 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙)");
//	scanf_s("%d", coffee);
//	ret = coffee_machine(coffee);
//	printf("a님 커피 여기 있습니다. \n\n");
//
//	printf("b님, 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙)");
//	scanf_s("%d", &coffee);
//	ret = coffee_machine(coffee);
//	printf("b님 커피 여기 있습니다 \n\n");
//
//	printf("c님, 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙)");
//	scanf_s("%d", &coffee);
//	ret = coffee_machine(coffee);
//	printf("c님 커피 여기 있습니다 \n\n");
//}



//// 기본 11-3 ////
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main()
//{
//	char ch;
//
//	ch = getch();
//	putch(ch);
//
//	ch = getch();
//	putch(ch);
//
//	ch = getch();
//	putch(ch);
//}



//// 기본 11-7 ////
//#define _crt_secure_no_warnings
//#include <stdio.h>
//void main()
//{
//	char s[20];
//	file* rfp;
//
//	rfp = fopen("c:\\temp\\aa.txt", "r");
//
//	fgets(s, 20, rfp);
//
//	printf("파일에서 읽은 문자열 : ");
//	puts(s);
//
//	fclose(rfp);
//}


////예제 29////
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int getnumber() {
//	return rand() % 45 + 1;
//}
//
//void main()
//{
//	short int lotto[6] = { 0, };
//	int i, k, num;
//	char dup = 'n';
//
//	printf("** 로또 추첨을 시작합니다. ** \n\n");
//	srand((unsigned)time(null));
//
//	for (i = 0; i < 6;) {
//		num = getnumber();
//
//		for (k = 0; k < 6; k++)
//			if (lotto[k] == num)
//				dup = 'y';
//		
//		if (dup == 'n')
//			lotto[i++] = num;
//
//		else
//			dup = 'n';
//	}
//
//	printf("추출 숫자 ==> ");
//	for (i = 0; i < 6; i++) {
//		printf("%d ", lotto[i]);
//	}
//
//	printf("\n\n");
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void main()
//{
//    int numbers[5];
//    int i, j;
//    FILE* file;
//
//    srand(time(NULL));
//
//    // 중복되지 않는 1~100 사이의 숫자 5개 생성
//    for (i = 0; i < 5; i++) {
//        int num;
//        do {
//            num = rand() % 100 + 1;
//            for (j = 0; j < i; j++) {
//                if (numbers[j] == num)
//                    break;
//            }
//        } while (j < i);
//        numbers[i] = num;
//    }
//
//    // 생성된 숫자를 화면에 출력하고 파일에 저장
//    file = fopen("ex11.txt", "w");
//    if (file == NULL) {
//        printf("파일을 열 수 없습니다.\n");
//        return;
//    }
//
//    printf("생성된 숫자: ");
//    for (i = 0; i < 5; i++) {
//        printf("%d ", numbers[i]);
//        fprintf(file, "%d ", numbers[i]);
//    }
//    printf("\n");
//
//    fclose(file);
//}

//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int getNumber() {
//    return rand() % 100 + 1;
//}
//
//int main() {
//    FILE* fp;
//    int numbers[5];
//    int i, j, num;
//
//    // 랜덤 시드 설정
//    srand((unsigned)time(NULL));
//
//    // 1~100 범위의 중복되지 않는 숫자 5개 추출
//    for (i = 0; i < 5; ) {
//        num = getNumber();
//        for (j = 0; j < i; j++) {
//            if (numbers[j] == num) {
//                num = 0;
//                break;
//            }
//        }
//        if (num != 0) {
//            numbers[i] = num;
//            i++;
//        }
//    }
//
//    // 화면에 숫자 출력
//    printf("추출 숫자 ==> ");
//    for (i = 0; i < 5; i++) {
//        printf("%d ", numbers[i]);
//    }
//    printf("\n");
//
//    // 파일에 숫자 저장
//    fp = fopen("C:\\Users\\betty\\Desktop\\5\\Github\\C\\C-programming\\C-homework\\C프로그래밍 9주차\\ex11.txt", "w");
//    if (fp == NULL) {
//        printf("파일을 열 수 없습니다.\n");
//        return 1;
//    }
//
//    fprintf(fp, "추출 숫자 ==> ");
//    for (i = 0; i < 5; i++) {
//        fprintf(fp, "%d ", numbers[i]);
//    }
//    fprintf(fp, "\n");
//
//    fclose(fp);
//
//    return 0;
//}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getNumber() {
    return rand() % 100 + 1;
}

int main() {
    FILE* fp;
    int numbers[5];
    int i, j, num;

    // 랜덤 시드 설정
    srand((unsigned)time(NULL));

    // 1~100 범위의 중복되지 않는 숫자 5개 추출
    for (i = 0; i < 5; ) {
        num = getNumber();
        for (j = 0; j < i; j++) {
            if (numbers[j] == num) {
                num = 0;
                break;
            }
        }
        if (num != 0) {
            numbers[i] = num;
            i++;
        }
    }

    // 화면에 숫자 출력
    printf("추출 숫자 ==> ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // 파일에 숫자 저장
    fp = fopen("C:\\Users\\betty\\Desktop\\5\\Github\\C\\C-programming\\C-homework\\C프로그래밍 9주차\\ex11.txt", "w");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    fprintf(fp, "추출 숫자 ==> ");
    for (i = 0; i < 5; i++) {
        fprintf(fp, "%d ", numbers[i]);
    }
    fprintf(fp, "\n");

    fclose(fp);

    return 0;
}
