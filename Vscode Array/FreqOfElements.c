#include <stdio.h>
int main()
{
    int arr[20]={1,2,3,4,4,3,2,1,1,4};
    int limit=10;
    int i,j,k,frequency;
    
    printf("Frequency of each elements : \n");
    for(i=0;i<limit;i++){
        if(arr[i]!=-1){
            frequency=1;
            for(j=i+1;j<limit;j++){
                if(arr[i]==arr[j]){
                    frequency++;
                    arr[j]=-1;
                }
            }
            
            printf("%d : %d \n",arr[i],frequency);
        } 
    }

    return 0;  
}
