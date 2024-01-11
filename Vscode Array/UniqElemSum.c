#include <stdio.h>
int main()
{
    int limit,a[100],i,j;
    int count=0,sum=0;
    printf("Enter the size of array: \n");
    scanf("%d", &limit);

     printf("Enter the values of array: \n");
     for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    printf("\nThe unique elements found in the array are: \n");
     for(i=0;i<limit;i++)
    {
        count=0;
        for(j=0;j<limit;j++){
            if(i!=j){
                if(a[i]==a[j]){
                    count++;
                }
            }
        }

        if(count==0){
        printf("%d\n",a[i]);
        sum=sum+a[i];
        }
     
    }
    printf("\nThe sum of unique elements are: %d\n", sum);
} 
