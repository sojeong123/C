// 20201012 컴퓨터학과 임소정
// Project 03
#define _CRT_SECURE_NO_WARNINGS
#define MAX_VIDEO 100
#define MAX_CHAR 100 // 문자열의 max 문자

#include <stdio.h>
#include <string.h>

struct VideoInfo { // 재고 대장: 현재 보유하고 있는 Video 정보 저장
	char title[MAX_CHAR];
	int qty; // 수량
};

int main(void)
{
	int videoCount = 5;
	struct VideoInfo videoList[MAX_VIDEO] = {
		{"BeforeSunrise", 1},
		{"BeforeSunset", 3},
		{"BeforeMidnight", 5},
		{"Casablanca", 7},
		{"EdgeOfTomorrow", 9}
	};	// 앞의 정보처럼 초기화

	char title[MAX_CHAR];
	int qty;
	int choice;
	int i;


	printf("1(All Video 출력), 2(구입), 3(검색), 4(종료): ");
	scanf("%d", &choice);

	while (choice != 4) {
		switch (choice) {
		case 1:	//보유한 Video들을 출력
			printf("Video제목\t수량\n");
			printf("-----------------------\n");
			for (i = 0; i < videoCount; i++)
				printf("%s\t%d\n", videoList[i].title, videoList[i].qty);
			break;

		case 2:	// Video 구입
			printf("Enter video 제목 : ");
			scanf("%s", title);
			printf("Enter video 수량 : ");
			scanf("%d", &qty);

			for (i = 0; i < videoCount; i++) {
				if (strcmp(videoList[i].title, title) == 0) {
					videoList[i].qty += qty;
					break;
				}
			}

			if (i == videoCount) {
				strcpy(videoList[videoCount].title, title);
				videoList[videoCount].qty = qty;
				videoCount++;
			}
			break;


		case 3:	// title로 Video 검색
			printf("Enter video 제목 : ");
			scanf("%s", title);

			for (i = 0; i < videoCount; i++) {
				if (strcmp(videoList[i].title, title) == 0) {
					if (videoList[i].qty > 0)
						printf("대여 가능합니다.\n");
					else
						printf("대여 중입니다.\n");
					break;
				}
			}

			if (i == videoCount)
				printf("그런 비디오는 없습니다.\n");

			break;

		}
		printf("1(All Video 출력), 2(구입), 3(검색), 4(종료): ");
		scanf("%d", &choice);
	}
}