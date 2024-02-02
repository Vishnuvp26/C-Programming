#include <stdio.h>
int main()
  {
    int limit=6,i,l1=100,l2=100;
    int array[20]={50,85,90,75,30,40};
    
    for(i=0;i<limit;i++){
        if(array[i]<l1){
            l2=l1;
            l1=array[i];
        }else if(array[i]>l1 && array[i]<l2){
            l2=array[i];
        }
    }
    
    printf("\n1st smallest number is : %d",l1);
    printf("\n2nd smallest number is : %d",l2);

  }