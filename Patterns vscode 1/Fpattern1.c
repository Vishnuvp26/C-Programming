#include <stdio.h>
int main()
{
    int i,j,n=3;
    
    for(i=1;i<=n;i++){
        
        for(j=1;j<=i*2;j++){
            printf("* ");
        }
        if(i==n){
            break;
        }
        for(j=1;j<=i*n;j++){
            printf("\n*");
        }
        printf("\n");
    }

}
