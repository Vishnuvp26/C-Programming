#include <stdio.h>
void main()
{
    int i,limit,a[100],l,sl;

    printf("Enter limit of array:\n");
    scanf("%d",&limit);
    printf("Enter values of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<limit;i++){
        if(a[i]>l){
            sl=l;
            l=a[i];
        }
        else if(a[i]>sl && a[i]<l){
            a[i]=sl;
        }
    }
    
    printf("First largest Number%d\n",l);
    printf("Second largest Number%d\n",sl);
    
}