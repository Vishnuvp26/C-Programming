// Sort the array replace odd with * and remove prime
#include <stdio.h>
int main()
{
    int i,j,k,arr[100]={2,9,7,10,4,9};
    int limit=6,flag=0,temp,l=42;
    
    for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(i=0;i<limit;i++){
        flag=0;
        for(j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            for(k=i;k<limit;k++){
                arr[k]=arr[k+1];
            }
            limit--;
            i--;
        }
    }
    
    for(i=0;i<limit;i++){
        if(arr[i]%2==1){
            arr[i]=l;
            printf("%c",arr[i]);
        }       
        else
        printf("%d",arr[i]);
    }
}
