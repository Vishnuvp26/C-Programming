#include <stdio.h>
int main()
{
    int i,j,a[50],b[50],c[50],arr1,arr2;

    printf("Enter 1st array limit\n");
    scanf("%d",&arr1);
    printf("Enter array elements of 1st array\n");
    for(i=0;i<arr1;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter 2nd array limit\n");
    scanf("%d",&arr2);
    printf("Enter array elements of 2nd array\n");
    for(i=0;i<arr2;i++){
        scanf("%d",&b[i]);
    }

    for(i=0;i<arr1;i++){  //merging 
        c[i]=a[i];
    }
    for(i=0;i<arr2;i++){
        c[i+arr1]=b[i];
    }

    printf("Merged Array: ");
    for(i=0;i<arr1+arr2;i++){
        printf("%d ",c[i]);
    }

    return 0;
}

