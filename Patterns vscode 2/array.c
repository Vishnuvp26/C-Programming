#include <stdio.h>
int main()
{
    int a[5],i;
    printf("Enter 5 Array Values :\n");
    for(i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    printf("Entered values are :\n");
    for(i=0;i<5;i++){  // printing reverse order : for(i=4;i>=0;i--)
      printf("%d\t", a[i]); 
       
    }
    
}