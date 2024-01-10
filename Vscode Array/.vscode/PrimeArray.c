#include <stdio.h>
int main()
{
    int i,j,limit,ar[50],counter;

    printf("Enter size of the array : ");
    scanf("%d",&limit);
    printf("Enter elements of the array :\n");
    for(i=0;i<limit;i++){
        scanf("%d",&ar[i]);
    }

    printf("Prime Numbers are : ");
    for(i=0;i<limit;i++){
        counter=0;
        for(j=2;j<limit;j++){
            if(ar[i]%j==0){
            counter=1;
            break;
        }
    }
    if(counter==0)
        printf("\t%d ", ar[i]);     
}
}
