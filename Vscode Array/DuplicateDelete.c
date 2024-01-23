#include <stdio.h>
int main()
{
    int i,j,k,arr[100],limit=10;
    printf("enter 10 array elements :\n");
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<limit-1;k++){
                    arr[k]=arr[k+1];
                }
                    limit--;
                    j--;
            }
        }
}
printf("after deleting duplicates : ");
for(i=0;i<limit;i++){
    printf("%d\t",arr[i]);
}
    
    return 0;
}