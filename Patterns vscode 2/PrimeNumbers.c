#include <stdio.h>
int main (void)
{
    int n,i,flag=0;
    printf("Enter a number to check prime or not \n");
    scanf("%d", &n);
    for(i=2;i<n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Prime Number");
        
    }else{
            printf("Not Prime");
        } 
} 