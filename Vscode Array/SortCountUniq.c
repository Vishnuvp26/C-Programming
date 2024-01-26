#include <stdio.h>
int main()
{
    int i,limit,j,temp;
    int a[100],flag,count=0;

    printf("Enter a limit\n");
    scanf("%d",&limit);
    printf("Enter array values\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<limit-1;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
    
    printf("Sorted values are :");
    for(i=0;i<limit;i++){
        printf("\t%d",a[i]);
    }
    
    printf("\nThe unique count are : ");
    for(i=0;i<limit;i++)
    {
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
     printf("%d",count);
}

