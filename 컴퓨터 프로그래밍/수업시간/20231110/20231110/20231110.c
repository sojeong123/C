// �����ڷ� 11����
// 1
// ����ü ���� �ʱ�ȭ
struct student aStudent = { 19950001, 100, 50 };

// ���� 1-1 : ����ü ��� ������ �� ����
aStudent.id = 19950001
aStudent.midterm = 100;
aStudent.final = 50;

// ���� 1-2 : ����ü ����� ���� �Է¹޴´�.
printf("�й� �Է�:");
scanf("%d", &aStudent.id);

printf("�߰���� ���� �Է�:");
scanf("%d", &aStudent.midterm);

printf("�б⸻��� ���� �Է�:");
scanf("%d", &Student.final);

// ���� 1-3 : ����ü ����� ���� ����Ѵ�.
printf("�й�: %d �߰�: %d �б⸻: %d\n", aStudent.id, aStudent.midterm, aStudent.final)

// ���� 1-4 : �߰����� �б⸻��� ������ ���� ����Ѵ�.
printf("�й� %d�� ������ %d�̴�\n", aStudent.id, aStudent.midterm + aStudent.final );



// ����ü ���� ���� MORE
����ü��(�±�) customer�� �̸��� ���̸� ������ ����ü��(�±�)�� �����϶�.
struct customer {
	char name[20];
	int age;
};

int main(void)
{
	// customer ����ü ���� aMan�� aWoman�� �����Ѵ�.
	struct customer aMan, aWoman;
	
	// aMan�� ��������, 35�� �ִ´�.
	strcpy(aMan.name, "����");
		aMan.age = 35;

	// aWoman�� ���� �Է¹޴´�.
	printf("���� ���� �̸���?");
	scanf(�� % s��, aWoman.name); // &�� �Ⱥ��ӿ� ����
	
	printf("���̴�?");
	scanf(�� % d��, &aWoman.age);

	// aMan�� ����Ѵ�. �������� 35���̴١�
	printf("%s�� % d���̴�\n", aMan.name, aMan.age );
}