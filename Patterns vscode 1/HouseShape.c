#include <stdio.h>

int main(){
    int i,j;
    for(i=1;i<=8;i++){
        for(j=1;j<=9;j++){
            
            if((i==6 || i==7 || i==8) && (j==4 || j==5 || j==6)){
                printf("  ");
            } 
            
            else if(j>=6-i&&j<=4+i){
                printf("* ");
            }
            
            else{
                printf("  ");
            }
        }
        
        printf("\n");
    }
    return 0;
}
