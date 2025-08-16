#include <stdio.h>
// matrix -> arr -> integers
// similar to 01.c but with arrays

int main() {
    double arr1[] = {1, 2, 3, 4};
    double arr2[] = {5, 6, 7, 8};
    double* ptr1 = arr1;
    double* ptr2 = arr2;
    double* matrix[] = {ptr1, ptr2};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            // printf("%d ", *(matrix[i] + j));
            // printf("%d ", matrix[i][j]);
            printf("%f (%p)\t", *matrix[i]++, matrix[i]);
        }
        printf("\n");
    }
}
