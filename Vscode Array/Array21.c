//Program to delete two elements after the occurrence of a prime number and replace all even numbers by 0.
#include <stdio.h>
int main ()
{

    int arr[100]={2,3,4,7,9,4,6,3,5,7,9,11};
    int limit=12;
    int i,j,k,flag;

    for(i=0;i<limit;i++){
        flag=0;
        for(j=2;j<arr[i];j++){
           if(arr[i]%j==0){
             flag=1;
             break;
            }
        }   

        if(flag==0){
            for(k=i;k<limit;k++){
                arr[k+1]=arr[k+3];
            }
            limit-=2;
        }

        if(arr[i]%2==0){
            arr[i]=0;
        }
      
        printf("%d\t",arr[i]);
    }
}
