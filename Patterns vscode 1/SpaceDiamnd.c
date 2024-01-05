#include <stdio.h>
int main() 
{
    int i,j,k; // cse guru
    for (i=1;i<=5;i++){
        for (k=5;k>=i;k--) // space printing opposite of i loop
            printf(" ");
        
        for (j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    
}

    for (i=5-1;i>=1;i--){ // upside down shape
        for(k=5;k>=i;k--){
            printf(" ");
        }
        for (j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
}

return 0;
}
