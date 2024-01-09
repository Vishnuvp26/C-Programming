#include <stdio.h>
int main() 
{
    int i,j,k=0;

    for(i=1;i<=4;i++){
        k=1;
        for(j=1;j<=8;j++){
            if(j<=0+i || j>=9-i){
            printf("%d ",k);
            j<=4?k++:k--;
            }
            else
            printf("* ");
            if(j==4)
            k--;
            
        }
        printf("\n");
    }
}