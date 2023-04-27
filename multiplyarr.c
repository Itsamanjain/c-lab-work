#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &m, &n);
    int first[m][n];
    printf("Enter the elements of the first matrix: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("The matrices cannot be multiplied.\n");
        return 0;
    }
    int second[p][q];
    printf("Enter the elements of the second matrix: \n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    int result[m][q];
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            result[i][j] = 0;
            for (k = 0; k < n; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    printf("The product of the matrices is: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
