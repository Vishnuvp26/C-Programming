#include <stdio.h>
int main()
{
    int i,arr[10],limit,small,large;

    printf("Enter a limit\n");
    scanf("%d",&limit);
    printf("Enter array values\n");
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    
    small = arr[0]; //Assume first element is smallest
    large = arr[0]; //Assume first element is largest
    
    for(i=1;i<limit;i++)
    {
        if (arr[i]<small){
            small=arr[i];
        }
        if (arr[i]>large){
            large=arr[i];
        }
    }
    
    printf("Largest element is : %d\n", large);
    printf("Smallest element is : %d\n", small);
    return 0;
}
