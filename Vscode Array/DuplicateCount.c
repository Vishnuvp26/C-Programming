#include <stdio.h>
int main() {
    int arr[10];  // Assuming an array of size 10, you can change this size as needed
    int n, i, j, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){  // Check for duplicate elements
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;  // Exit the inner loop when a duplicate is found
            }
        }
    }
    
    printf("%d duplicate Count: %d\n", arr[i], count);

    return 0;
}
