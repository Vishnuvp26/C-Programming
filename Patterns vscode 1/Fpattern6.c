#include <stdio.h>
int main()
{
    int i,k,j,n=4;
    
    for(i=1;i<=n;i++){
        if(i==1){
            printf("*\n");
        }
        
        for(k=1;k<=i;k++){
            for(j=1;j<=i;j++){
            printf("* ");
            }
            printf("\n");
        }
        
        for(j=1;j<=n*i;j++){
            if(j%2==0)
            printf("$ ");
            else
            printf("* ");
        }
        printf("\n");
    }
} 


