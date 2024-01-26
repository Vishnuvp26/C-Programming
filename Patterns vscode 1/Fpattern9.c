#include <stdio.h>
int main()
{
    int i,k,j,n=3;
    
    for(i=1;i<=n;i++){
        
        for(k=1;k<=2;k++){
            for(j=1;j<=i;j++){
            printf("0 ");
            }
            printf("\n");
        }
        
        for(j=1;j<=n*i;j++){
            printf("* ");
        }
        printf("\n");
    }
} 
