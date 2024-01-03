#include <stdio.h>

int main()
{
    int n,s,i,j,k,m;
    printf("Enter limit");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=i;j<n;j++){
            printf(" ");
        }
        for(s=i;s>=0;s--){
            printf("%d",s);
        }
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        printf("\n");
    }
   

    return 0;
}