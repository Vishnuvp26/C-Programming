#include <stdio.h>
int main()
{
    int arr[20]={1,2,3,4,4,3,2,1,1,4};
    int limit=10;
    int i,j,k,frequency,repeat=0,elements;
    
    printf("Most Repeated Element : \n");
    for(i=0;i<limit;i++){
        if(arr[i]!=-1){
            frequency=1;
            for(j=i+1;j<limit;j++){
                if(arr[i]==arr[j]){
                    frequency++;
                    arr[j]=-1;
                }
            }

             if(frequency>repeat){
                repeat=frequency;
                elements=arr[i];
            }
            
        } 
    }

    printf("%d : %d \n",elements,frequency);

    return 0;  
}
