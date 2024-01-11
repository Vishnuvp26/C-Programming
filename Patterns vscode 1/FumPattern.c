#include <stdio.h>
int main() 
{
    int i,j;

    for (i=0;i<=5;i++){  // logic: print 1,123,1234 pattern and make it decrement with an extra loop
        for (j=1;j<=i;j++){
            printf("%d ", j);
        }
        for (j=i-1;j>=1;j--){ // loop for decrement 1,121,12321
            printf("%d ", j);
        }
        printf("*\n*"); // star for triangle border
    }

    //sesond phase of pyramid
    for (i=5-1;i>=1;i--){
        for (j=1;j<=i;j++){
            printf("%d ", j);
        }
        for (j=i-1;j>=1;j--){
            printf("%d ", j);
        }
        printf("*\n*"); // star for triangle border
    }

    return 0;
}
