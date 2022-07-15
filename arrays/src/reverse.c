#include <stdio.h>

int main()
{
    int size = 0;

    printf("Enter size of array >> ");

    scanf("%d", &size);

    if (size < 1) {
        return 0;
    }

    int array[size];

    printf("Array is:\n");

    for (int i = size - 1; i >= 0; i--) {
        array[i] = i + 1;
        printf("%2d ", array[i]);
    }

    printf("\n");

    return 0;
}
