#include <stdio.h>
int main ()
{
    int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<=i;j++){
            if(j==2||j==4||j==6) // which values stars to be printed
                printf("* ");
            else
            printf("%d ",j*i);
        }
        printf("\n");
    }
}