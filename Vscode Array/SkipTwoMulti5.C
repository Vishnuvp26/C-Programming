#include <stdio.h>
int main()
{
    int i,j,arr[100]={5,2,1,4,10,6,7,15,9,1},limit=10;
    
    for(i=0;i<limit;i++){
        if(arr[i]%5==0){
            for(j=i;j<limit;j++){
                arr[j+1]=arr[j+3];
            }
            limit-=2;
        }
    }
    printf("after deleting multiple of 5 : ");
        for(i=0;i<limit;i++){
            printf("%d\t",arr[i]);
        }
}
