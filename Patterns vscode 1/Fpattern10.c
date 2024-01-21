#include <stdio.h>
int main()
{
    int i,k,j,n=3;
    
    for(i=1;i<=n;i++){
        
        for(j=1;j<=i;j++){
            for(k=1;k<=i*3;k++){
                printf("* ");
            }
            printf("\n");
        }
        
        if(i==n)
        break;
        
        for(j=1;j<=n;j++){
            printf("*\n");
        }
    }
   
} 