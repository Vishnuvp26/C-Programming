#include <stdio.h>
int main ()
{
    int i,limit,a[20],l=-2000,sl=-3000;

    printf("Enter a limit : ");
    scanf("%d",&limit); 
    printf("Enter Values\n");
    for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
    }

    for(i=1;i<limit;i++){
        if(a[i]>l){
            sl=l;
            l=a[i];
        }
        else if(a[i]!=l && a[i]>sl){
        sl=a[i];
        }
    }

    printf("Largest element is :%d\n",l );
    printf("Second largest element is :%d",sl);
}