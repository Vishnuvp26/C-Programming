#include <stdio.h>
int main() {
    
    int i,j,n=5,k=10;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=k;j++){
            printf("* ");
        }
        
        for(j=1;j<=i;j++){
            printf("\n*");
        }
        k-=2; // reduce the value of k by 2. After this operation, the value of k will be 8.
        
        printf("\n");
    }

    return 0;
}