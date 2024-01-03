// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n,i,j,k,s,m,r;
    printf("Enter limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=i;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
    
    

    return 0;
}