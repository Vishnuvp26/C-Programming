#include <stdio.h>
int main()
{
    int i,j,k;
    
    for(i=1;i<=5;i++){
        k=0;
        for(j=1;j<=5;j++){
          if(j<=i+1){
            printf("%2d ",k);
            k=k+i*1; // multiplication
          }
          else
            printf("  "); 
        }
        printf("\n");
    }

}
