#include <stdio.h>
int main() 
{
    int i, j, temp, a[50], b[50], c[100], arr1, arr2;

    printf("Enter 1st array limit\n");
    scanf("%d", &arr1);
    printf("Enter array elements of 1st array\n");
    for (i = 0; i < arr1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter 2nd array limit\n");
    scanf("%d", &arr2);
    printf("Enter array elements of 2nd array\n");
    for (i = 0; i < arr2; i++) {
        scanf("%d", &b[i]);
    }

    // Merging
    for (i = 0; i < arr1; i++) {
        c[i] = a[i];
    }
    for (i = 0; i < arr2; i++) {
        c[i + arr1] = b[i];
    }

    printf("Merged Array: ");
    for (i = 0; i < arr1 + arr2; i++) {
        printf("%d ", c[i]);
    }

    // Sorting merged array
    for (i = 0; i < arr1 + arr2 - 1; i++) {
        for (j = i + 1; j < arr1 + arr2; j++) {
            if (c[i] > c[j]) { // Ascending order
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("\nSorted values are:");
    for (i = 0; i < arr1 + arr2; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
