// 20201012 ��ǻ���а� �Ӽ���
// Project 3_3 (����)
// (���� �����)
#define _CRT_SECURE_NO_WARNINGS
#define MAX_VIDEO 100
#define MAX_CUST 200		// max customer
#define MAX_CHAR 100		// ���ڿ��� max ����
#include <stdio.h>
#include <string.h>

typedef struct { // ��� ����: ���� �����ϰ� �ִ� Video ���� ����
	char title[MAX_CHAR];
	int qty; // ����
} VideoInfo;

typedef struct { // ���� ����: �����ذ� (�� id�� video id)���� ����
	int custId; // �� id : 1, 2, 3
	char title[MAX_CHAR]; // Video ����
} RentInfo;


void printAllVideo(VideoInfo videoList[], int videoCount)
{
	int i = 0;
	printf("Video����\t����\n");
	printf("------------------------\n");
	for (i = 0; i < videoCount; i++)
		printf("%s\t%d\n", videoList[i].title, videoList[i].qty);
}


void purchaseVideo(VideoInfo videoList[], int* videoCountPtr, char* title[], int qty)
{
	strcpy(videoList[*videoCountPtr].title, title);
	videoList[*videoCountPtr].qty = qty;
	(*videoCountPtr)++;
}

int searchVideoByTitle(VideoInfo* videoList, int videoCount, char* title)
{
	int i = 0;
	for (i = 0; i < videoCount; i++)
	{
		if (strcmp(title, videoList[i].title) == 0)
			return i;
	}
	return -1;
}

void rentVideo(//�Ű����� ����Ʈ �ֱ� 
	VideoInfo videoList[], int videoCount, RentInfo rentList[], int* rentCountPtr, char* title, int Id)
{
	int index = searchVideoByTitle(videoList, videoCount, title);

	videoList[index].qty--;
	rentList[*rentCountPtr].custId = Id;
	strcpy(rentList->title, title);
	(*rentCountPtr)++;
	rentList++;
	rentList->custId = '\0';
}

void printAllRent(RentInfo rentList[], int rentCount)
{
	printf("��ID\tVideo����\n");
	printf("------------------------\n");
	for (int i = 0; i < rentCount; i++)
		printf("%d\t%s\n", rentList[i].custId, rentList[i].title);
}

void readVideo(VideoInfo videoList[], int* videoCountPtr)
{
	FILE* fp;
	VideoInfo video;
	if ((fp = fopen("video.txt", "r")) == NULL)
	{
		printf("�Է� ���� ���� ����\n");
		exit(1);
	}
	// ���� ������ �Է����Ͽ��� �б�
	while (fscanf(fp, "%s %d", video.title, &video.qty) != EOF)
	{
		videoList[*videoCountPtr] = video;
		(*videoCountPtr)++;
	}
	fclose(fp);
}

void writeVideo(VideoInfo videoList[], int videoCount)
{
	FILE* fp;
	int i;
	if ((fp = fopen("video.txt", "w")) == NULL)
	{
		printf("��� ���� ���� ����\n");
		exit(1);
	}
	// ���� ������ ������Ͽ� ����
	for (i = 0; i < videoCount; i++)
		fprintf(fp, "%s %d\n", videoList[i].title, videoList[i].qty);
	fclose(fp);
}

void readRent(RentInfo rentList[], int* rentCountPtr)
{
	FILE* fp;
	RentInfo rent;
	if ((fp = fopen("rent.txt", "r")) == NULL)
	{
		printf("�Է� ���� ���� ����\n");
		exit(1);
	}
	// ���� ������ �Է����Ͽ��� �б�
	while (fscanf(fp, "%d %s", &rent.custId, rent.title) != EOF)
	{
		rentList[*rentCountPtr] = rent;
		(*rentCountPtr)++;
	}
	fclose(fp);
}

void writeRent(RentInfo rentList[], int rentCount)
{
	FILE* fp;
	int i;
	if ((fp = fopen("rent.txt", "w")) == NULL)
	{
		printf("��� ���� ���� ����\n");
		exit(1);
	}
	// ���� ������ ������Ͽ� ����
	for (i = 0; i < rentCount; i++)
		fprintf(fp, "%d %s\n", rentList[i].custId, rentList[i].title);
	fclose(fp);
}

int main(void)
{
	int videoCount = 5;
	VideoInfo videoList[MAX_VIDEO] = {
		{"BeforeSunrise", 1},
		{"BeforeSunset", 3},
		{"BeforeMidnight", 5},
		{"Casablanca", 7},
		{"EdgeOfTomorrow", 9}
	};

	int rentCount = 0;			// ���� ���� �Ǽ��� 0��
	RentInfo rentList[MAX_CUST];
	int choice;
	int indexSearched;
	char title[MAX_CHAR];
	int custId, qty;

	printf("1(All Video ���), 2(����), 3(�˻�), 4(�뿩), 5(All �뿩���� ���), 6(����) : ");
	scanf("%d", &choice);

	while (choice != 6)
	{
		switch (choice)
		{
		case 1: printAllVideo(videoList, videoCount); break;
		case 2:
			printf("Enter video ���� : ");
			scanf("%s", title);
			printf("Enter video ���� : ");
			scanf("%d", &qty);
			purchaseVideo(videoList, &videoCount, title, qty);
			break;
		case 3:
			printf("Enter video ���� : ");
			scanf("%s", title);
			if ((indexSearched = searchVideoByTitle(videoList, videoCount, title)) == -1)
				printf("�׷� ������ �����ϴ�.\n");
			else if (videoList[indexSearched].qty == 0)
				printf("�� �뿩���Դϴ�.\n");
			else
				printf("�뿩 �����մϴ�.\n"); break;
		case 4:
			printf("Enter video ���� :");
			scanf("%s", title);
			printf("Enter �� id : ");
			scanf("%d", &custId);
			rentVideo(videoList, videoCount, rentList, &rentCount, title, custId);
			break;
		case 5:
			printAllRent(rentList, rentCount); break;
		}
		printf("1(All Video ���), 2(����), 3(�˻�), 4(�뿩), 5(All �뿩���� ���), 6(����) : ");
		scanf("%d", &choice);
	}
}