#include <stdio.h>
int main()
{
    int i,limit,j,temp;
    int value[100],count=0;


    printf("Enter a limit\n");
    scanf("%d",&limit);
    printf("Enter array values\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&value[i]);
    }


    for(i=0;i<limit-1;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(value[i]>value[j]) // Ascending order
            {
                temp=value[i];
                value[i]=value[j];
                value[j]=temp;

            }
        }
    }

    printf("Sorted values are :");
    for(i=0;i<limit;i++){
        printf("%d\t",value[i]);
    }
    for(i=0;i<limit;i++){
        if(value[i]==1){
            count++;
        }
    }
    printf("Ones count %d : ",count);
    
}
