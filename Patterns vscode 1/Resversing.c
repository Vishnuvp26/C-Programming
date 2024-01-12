#include <stdio.h>
int main ()
{
    int a[50],i,j,n,temp;

    printf("Enter a limit : ");
    scanf("%d", &n); 
    printf("Enter Values\n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    printf("After reversing : ");
    for(i=0,j=n-1;i<n/2;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
    
}