#include <stdio.h>
int main()
{
    int i,j,n=3,st=2;
    
    for(i=1;i<=n;i++){
        
        for(j=1;j<=st;j++){
            printf("* ");
        }
        st=st*2;
        
        for(j=1;j<=i*2-1;j++){
            printf("\n*");
        }
        printf("\n");
    }

} 
    