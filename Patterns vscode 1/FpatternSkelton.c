#include <stdio.h>
int main()
{
    int i,j,k,n=3;
    for(i=1;i<=n;i++){
        for(j=1;j<=i*2;j++){
            printf("* ");
        }
        printf("\n");
        for(k=1;k<=i;k++){
            printf("*\n");
        }
    }
}