#include <stdio.h>
int main()
{
    int i,j,temp;
    int arr1[10],arr2[10];

    printf("Enter 5 values of 1st array :\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter 5 values of 2nd array :\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr2[i]);
    }

    for(i=0;i<5;i++){ // simple swaping using temp
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }

    printf("Array 1 :\n");
    for(i=0;i<5;i++){
        printf("\t%d",arr1[i]);
    }
    
    printf("\n"); 

    printf("Array 2 :\n");
    for(i=0;i<5;i++){
        printf("\t%d",arr2[i]);
    }
}