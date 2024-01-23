#include <stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=8;i++){
        k=i;
        
        for(j=1;j<=7;j++){
            if(j<=i*2-1){
            printf("*");
            i<=5?k++:k--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }


}