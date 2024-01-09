#include <stdio.h>

int main() {
    int m, n, p, q;

    printf("Enter dimensions for matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter dimensions for matrix B (p q): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Error: Matrix multiplication is not possible.\n");
        return 0;
    }

    int A[m][n], B[p][q], multiply[m][q];
    int i, j, k; // Declare loop counters at the beginning

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < p; ++i) {
        for (j = 0; j < q; ++j) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < m; ++i) {
        for (j = 0; j < q; ++j) {
            int sum = 0;
            for (k = 0; k < p; ++k) {
                sum += A[i][k] * B[k][j];
            }
            multiply[i][j] = sum;
        }
    }

    printf("Resultant matrix C:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < q; ++j) {
            printf("%d ", multiply[i][j]);
        }
        printf("\n");
    }

    return 0;
}

