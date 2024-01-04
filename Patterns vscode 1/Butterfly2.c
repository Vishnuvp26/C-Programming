#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++){ // first phase mysirg skelton
        for(j=1;j<=9;j++){
            if(j<=0+i || j>=10-i)
                 printf("* ");
                 else
                printf("  ");
            
        }
        printf("\n");
    }
   
   for(i=1;i<=5;i++){ // second phase first phase mysirg skelton - opposite
        for(j=1;j<=9;j++){
            if(j<=6-i || j>=4+i)
                 printf("* ");
                 else
                printf("  ");
            
        }
        printf("\n");
    }
   
    return 0;
}