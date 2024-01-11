#include <stdio.h>
int main()
{
    int i,limit,j=0,k=0;
    int a[10],b[10],c[10];
    
    printf("Enter array limit\n");
    scanf("%d",&limit);
    printf("Enter array values\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<limit;i++){
        if(a[i]%2==0){
            b[j]=a[i];
            j++;
        }
        else{
        c[k]=a[i];
        k++;
        }
    }
    
    printf("\nEven numbes are : \n");
    for(i=0;i<j;i++){
        printf("%d ",b[i]);
    }
     printf("\nOdd numbers are : \n");
    for(i=0;i<k;i++){
        printf("%d ",c[i]);
    }
    return 0;
}
