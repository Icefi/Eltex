#include <stdio.h>

int main()
{
    int size = 0;

    printf("Enter size of matrix >> ");

    scanf("%d", &size);

    if (size < 1) {
        return 0;
    }

    int matrix[size][size];

    printf("Matrix is:\n");

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = (size - i - 2) < j;
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}
