#include <stdio.h>
#include <string.h>

int main ()
{
    int size = 0;

    int i, j;

    printf("Enter matrix size >> ");

    scanf("%d", &size);

    if (size < 1) {
        return 0;
    }

    int matrix[size][size];

    bzero(matrix, size * size * sizeof(int));

    int index = 0;

    i = 0;
    j = -1;

    while (index < size * size) {

        /* fill right */
        while (j < size - 1 && matrix[i][j + 1] == 0) {
            matrix[i][++j] = ++index;
        }

        /* fill down */
        while (i > 0 && matrix[i - 1][j] == 0) {
            matrix[--i][j] = ++index;
        }

        /* fill up */
        while (i < size - 1 && matrix[i + 1][j] == 0) {
            matrix[++i][j] = ++index;
        }

        /* fill left */
        while (j > 0 && matrix[i][j - 1] == 0) {
            matrix[i][--j] = ++index;
        }
    }


    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
