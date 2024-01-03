#include <stdio.h>

int main()
{
    int limit,i,value[100],SearchKey,flag=0;
    printf("Enter a limit");
    scanf("%d", &limit); 
    printf("Enter Values");
    for(i=0;i<limit;i++){ 
        scanf("%d", &value[i]);
    }
    printf("Enter search Value");
    scanf("%d", &SearchKey);

    for(i=0;i<limit;i++){
        if(SearchKey==value[i]){
            flag=1;
            break;

        }
    }
   if(flag==1){
    printf("Value found at position %d", i+1);
   }
   else{
    printf("value not found");
   }
}