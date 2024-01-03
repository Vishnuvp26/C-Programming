#include <stdio.h>                                                  
int main()
{
    int i,j;
    int px=1,py=9;

    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(j==px||j==py)
                printf("* ");
                else
                printf("  ");   
            }
                px++;
                py--;
                printf("\n");
    }
    return 0;
}	