#include <stdio.h>
int main() 
{
    int i,j;

    for(i=1;i<=5;i++){ 
        for(j=1;j<=5-i;j++){   // Print leading spaces
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++){ 
            printf("%d ",j);
        }
        printf("\n");
    }
    

    for(i=5-1;i>=1;i--){
        for(j=1;j<=5-i;j++){
            printf("  ");
        }
            for(j=1;j<=2*i-1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}



