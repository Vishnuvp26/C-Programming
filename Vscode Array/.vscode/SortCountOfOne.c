// Sort an array and print the count of ‘1’ in the array.
#include <stdio.h>
int main()
{
   int a[100]={1,2,1,4,5,4};
   int n=6,temp,count=0,i,j;

   for(i=0;i<n-1;i++){
       for(j=i+1;j<n;j++){
           if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
   for(i=0;i<n;i++){ // checking count of 1
       if(a[i]==1){
           count++;
       }
   }
          printf("count of 1: %d ",count);

    return 0;
}