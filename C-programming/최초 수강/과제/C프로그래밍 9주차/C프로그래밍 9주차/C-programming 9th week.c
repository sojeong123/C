//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int coffe_machine(int button)
//{
//	printf("# 1. (�ڵ�����) �߰ſ� ���� �غ��Ѵ�.");
//	printf("# 2. (�ڵ�����) �������� �غ��Ѵ�.");
//
//	switch(coffee)
//	{
//		//if coffee = 1
//	case = 1: printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��. \n"); break;
//	case = 2: printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��. \n"); break;
//	case = 3: printf("# 3. (�ڵ�����) ��Ŀ�Ǹ� ź��. \n"); break;
//	default: printf("# 3. (�ڵ�����) �ƹ��ų� ź��. \n"); break;
//	}
//}
//
//printf("# 4. (�ڵ�����) ���� �״´�. \n");
//printf("# 5. (�ڵ�����) ��Ǭ���� ��� ���δ�. \n\n");
//
//return 0;
//
//void main ()
//{
//	int coffee;
//	int ret;
//
//	printf("a��, � Ŀ�� �帱���? (1:����, 2:����, 3:��)");
//	scanf_s("%d", coffee);
//	ret = coffee_machine(coffee);
//	printf("a�� Ŀ�� ���� �ֽ��ϴ�. \n\n");
//
//	printf("b��, � Ŀ�� �帱���? (1:����, 2:����, 3:��)");
//	scanf_s("%d", &coffee);
//	ret = coffee_machine(coffee);
//	printf("b�� Ŀ�� ���� �ֽ��ϴ� \n\n");
//
//	printf("c��, � Ŀ�� �帱���? (1:����, 2:����, 3:��)");
//	scanf_s("%d", &coffee);
//	ret = coffee_machine(coffee);
//	printf("c�� Ŀ�� ���� �ֽ��ϴ� \n\n");
//}



//// �⺻ 11-3 ////
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



//// �⺻ 11-7 ////
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
//	printf("���Ͽ��� ���� ���ڿ� : ");
//	puts(s);
//
//	fclose(rfp);
//}


////���� 29////
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
//	printf("** �ζ� ��÷�� �����մϴ�. ** \n\n");
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
//	printf("���� ���� ==> ");
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
//    // �ߺ����� �ʴ� 1~100 ������ ���� 5�� ����
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
//    // ������ ���ڸ� ȭ�鿡 ����ϰ� ���Ͽ� ����
//    file = fopen("ex11.txt", "w");
//    if (file == NULL) {
//        printf("������ �� �� �����ϴ�.\n");
//        return;
//    }
//
//    printf("������ ����: ");
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
//    // ���� �õ� ����
//    srand((unsigned)time(NULL));
//
//    // 1~100 ������ �ߺ����� �ʴ� ���� 5�� ����
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
//    // ȭ�鿡 ���� ���
//    printf("���� ���� ==> ");
//    for (i = 0; i < 5; i++) {
//        printf("%d ", numbers[i]);
//    }
//    printf("\n");
//
//    // ���Ͽ� ���� ����
//    fp = fopen("C:\\Users\\betty\\Desktop\\5\\Github\\C\\C-programming\\C-homework\\C���α׷��� 9����\\ex11.txt", "w");
//    if (fp == NULL) {
//        printf("������ �� �� �����ϴ�.\n");
//        return 1;
//    }
//
//    fprintf(fp, "���� ���� ==> ");
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

    // ���� �õ� ����
    srand((unsigned)time(NULL));

    // 1~100 ������ �ߺ����� �ʴ� ���� 5�� ����
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

    // ȭ�鿡 ���� ���
    printf("���� ���� ==> ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // ���Ͽ� ���� ����
    fp = fopen("C:\\Users\\betty\\Desktop\\5\\Github\\C\\C-programming\\C-homework\\C���α׷��� 9����\\ex11.txt", "w");
    if (fp == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    fprintf(fp, "���� ���� ==> ");
    for (i = 0; i < 5; i++) {
        fprintf(fp, "%d ", numbers[i]);
    }
    fprintf(fp, "\n");

    fclose(fp);

    return 0;
}
