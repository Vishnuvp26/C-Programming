#include <stdio.h>
int main()
{
    int i,j,k;
    
    for(i=1;i<=9;i++){
        i<=5?k++:k--;
        for(j=1;j<=9;j++){
            if(i==j||j==10-i) // printing x symbol logic
            printf("%d",k);
            else
            printf(" ");
        }
        printf("\n");
    }
    
}