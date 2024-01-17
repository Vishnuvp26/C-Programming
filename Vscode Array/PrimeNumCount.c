//27. Write a program to count the total number of prime numbers in an array.
#include <stdio.h>
int main()
{
    int i,k,n,j,a[10],count=0;
    printf("Enter Size Of Array");
    scanf("%d",&n);
    printf("Enter Elemets Of Array");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    
   printf("\n no.of Prime number : ");
   for(i=0;i<n;i++){
       k=0;
    for(j=1;j<=a[i];j++){
        if(a[i]%j==0)
            k++;
    }
    if(k==2)
        count++;
  }
    printf(" %d",count);
}
