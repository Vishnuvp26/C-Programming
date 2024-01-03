#include <stdio.h>

int main(void)
{
    int i;
    for(i=0;i<3;i++){
        printf("hi\n");
        if(i==3){
            continue;
        }
        printf("hello\n");
    }
    printf("finished\n");

}