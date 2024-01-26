#include <stdio.h>
int main()
{
    int limit,a[100],i,j;
    int count=0,flag=0;
    
    printf("Enter the size of array: \n");
    scanf("%d", &limit);

     printf("Enter the values of array: \n");
     for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

     for(i=0;i<limit;i++){
        flag=0;
        for(j=0;j<limit;j++){
            if(i!=j){
                if(a[i]==a[j]){
                    flag=1;
                    break; 
                }
            }
        }

        if(flag==0){
        count++;
        }
    }
     printf("count of unique elements are : %d",count);
}

