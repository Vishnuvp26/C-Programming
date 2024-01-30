#include <stdio.h>
int main()
{
    int a[10]={2,3,7,3,2,13};
    int limit=6;
    int i,j,flag,k;

    printf("Unique Prime Numbers are : \n");
    for(i=0;i<limit;i++){
        flag=0;
        for(j=2;j<a[i];j++){
            if(a[i]%j==0){
                flag=1;
                break;
            }
        }
        if (flag==0){
            k=0;
            for(j=0;j<limit;j++){
                if(a[i]==a[j]&&i!=j){
                    k=1;
                    break;
                }
            }
            if(k==0){
                printf("%d\t",a[i]);
            }
        }
    }

}