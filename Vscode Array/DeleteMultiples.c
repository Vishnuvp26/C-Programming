#include <stdio.h>
int main() 
{
    int arr[10],n,i,newSize=0,sum=0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements into the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Delete multiples of 5
    for (i = 0; i < n; i++) {
        if (arr[i] % 5 != 0) { // Non multiple of 5 elements are checked
            arr[newSize] = arr[i]; // Non multiples are added to new array
            newSize++;
        }
    }

    printf("Result:\n");
    for (i = 0; i < newSize; i++) {
        printf("%d\t", arr[i]);
    }

    // Calculate and print the sum
    //for (i = 0; i < newSize; i++) {
    //    sum = sum + arr[i];
    // }
    //printf("\nSum of Non-Multiple Elements: %d\n", sum);


    return 0;
}
