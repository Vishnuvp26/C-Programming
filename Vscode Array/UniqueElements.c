#include <stdio.h>
int main()
{
    int limit,a[100],i,j;
    int count=0;
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
                    count++; //unique elements are values who dont have copies, so copy will be count++ and count=0 is non copy so it get's printed
                }
            }
        }

        if(count==0)
     printf("%d\n",a[i]);

    }
} 

