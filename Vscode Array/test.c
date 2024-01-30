#include <stdio.h>
int main()
{
    int i,j,arr[100]={5,2,1,4,10,6,7,15,2,1},limit=10;
    
    for(i=0;i<limit;i++){
        if(arr[i]%2==0){
            if(i==limit-1){
                limit=limit;
            }
            else if(i==limit-2){
                limit=limit-1;

            }
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
