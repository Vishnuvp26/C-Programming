#include <stdio.h>

int main()
{
    int limit,sum=0,i,value[100];
    printf("Enter a limit");
    scanf("%d", &limit); 
    printf("Enter Values");
    for(i=0;i<limit;i++){
        scanf("%d", &value[i]);
    }
    for(i=0;i<limit;i++){ 
       sum=sum+value[i]; 
    }
        printf("Sum : %d", sum); 
}