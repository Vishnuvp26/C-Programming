#include <stdio.h>
int main() 
{
    int i,j,array[10],count=0,n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }

    for (int i=0;i<n;i++){
        if(array[i]%2==0){
            count++;
        }
    }

    printf("Number of even numbers in the array: %d\n",count);

    return 0;
}