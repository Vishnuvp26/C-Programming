#include <stdio.h>                                                  
int main()
{
    int i,j;
    int px=5,py=5;

    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(j==px||j==py)
                printf("* ");
            else
                printf("  ");   
            }
                px--;
                py++;
                printf("\n");
    }
    return 0;
}	