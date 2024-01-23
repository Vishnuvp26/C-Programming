#include <stdio.h>
int main() 
{
    int i,j;
    int n= 50; // Initial value

    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%d ",n);
            n-=5; // Decrease the value by 5 for the next iteration
        }
        printf("\n");
    }

    return 0;
}
