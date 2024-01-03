#include <stdio.h>

int main() {
 int i,j,n;
 int freq=0,a[10];

    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the Elements of the array : \n");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }

   printf("Frequancy of each Elements Of the Array : \n");
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            freq=1;
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                     freq++;
                     a[j]=-1;
                }
            }
            
             printf("%d : %d \n",a[i],freq);
            
            
        }
      
    }
     
    return 0;
}