#include <stdio.h>
int main()
{
    int i,j,n=4,st=1;
    
    for(i=1;i<=n;i++){
        
        for(j=1;j<=st;j++){
            printf("*\n");
        }
        
        for(j=1;j<=i*2;j++){
            printf("* ");
        }
        
        if(st==1)
            st+=2;
            else
            st-=2;
        
        printf("\n");
    }
} 
