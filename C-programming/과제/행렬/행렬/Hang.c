#include <stdio.h>

void print_matrix(int n, double a[][n]) {
    // n x n 행렬 출력 함수
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }
}

void matrix_inverse(int n, double a[][n]) {
    // n x n 행렬의 역행렬 계산 함수

    // 행렬식 계산
    double det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
        - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
        + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
    printf("행렬식: %.2f\n", det);

    // 여인수(adjugate)행렬 계산
    double adj[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sign = ((i + j) % 2 == 0) ? 1 : -1;  // i+j가 짝수면 1, 홀수면 -1
            double sub_det = a[(j + 1) % n][(i + 1) % n] * a[(j + 2) % n][(i + 2) % n] - a[(j + 1) % n][(i + 2) % n] * a[(j + 2) % n][(i + 1) % n];
            adj[i][j] = sign * sub_det;
        }
    }
    printf("여인수(adjugate)행렬:\n");
    print_matrix(n, adj);

    // 역행렬 계산
    double inv[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            inv[i][j] = adj[i][j] / det;
        }
    }
    printf("역행렬:\n");
    print_matrix(n, inv);
}

int main() {
    double a[3][3];
    printf("3x3 행렬의 원소를 입력하세요:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &a[i][j]);
        }
    }
    printf("입력한 행렬:\n");
    print_matrix(3, a);

    matrix_inverse(3, a);

    return 0;
}
