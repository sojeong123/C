//20201012 ��ǻ���а� �Ӽ���
#include <stdio.h>
int main() {
	int count = 1;
	int input;
	int sum = 0;

	while (count <= 5) {
		printf("0���� ū ���� �Է�<%d��°>: ", count);
		scanf_s("%d", &input);

		while (input <= 0) {
			printf("�Է��� �߸��Ǿ����ϴ�. 0���� ū ���� �ٽ� �Է�<%d��°>: ", count);
			scanf_s("%d", &input);
		}

		sum += input;
		count++;
	}

	printf("�Էµ� ���� �� ��: %d\n", sum);

	return 0;
}