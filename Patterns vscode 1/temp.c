#include <stdio.h>
int main()
{

 int a[100];
 int b[100];
 int i,n;
 
 printf("Enter the size of array:");
 scanf("%d",&n);
 printf("Enter the elements:\n");
 for(i=0;i<n;i++){
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++){
     b[i]=a[i];
 }
 printf("Array1:");
 for(i=0;i<n;i++){
     printf("%d ",a[i]);
 }
 printf("\n");
 printf("Array2:");
 for(i=0;i<n;i++){
     printf("%d ",a[i]);
 }

    
   
   return 0;
}