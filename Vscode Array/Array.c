#include <stdio.h>
int main()
{
    int a[10],i;
    printf("Enter 10 Array Values :\n");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    printf("Entered values are :\n");
    for(i=0;i<10;i++){
      printf("%d\t", a[i]); 
       
    }
    
}