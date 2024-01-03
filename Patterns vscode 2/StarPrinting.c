#include <stdio.h>

int main()
{
    int limit=5,i,j;
    printf("Enter a limit");
    scanf("%d", &limit);

for(i=1;i<=limit;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }

    for(i=limit;i>=1;i--){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }

    
    
    return 0;
}

