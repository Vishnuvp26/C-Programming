// program to print prime numbers in an array
// a[5] = {5, 8, 7, 12, 17};
// output = 5,7,17

#include <stdio.h>
int main ()
{
    int limit,a[100],i,j;
    int count=0;
    printf("Enter the size of array: \n");
    scanf("%d", &limit);

     printf("Enter the values of array: \n");
     for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    printf("\nThe prime numbers are: \n");
    for(i=0;i<limit;i++){
        count=0;
        for(j=2;j<a[i];j++){
            if(a[i]%j==0){
                count++; // indicate not a prime and printf is skipped
                break;
            }
        }
        if(count==0) // prime is printed when count==0
        printf("\t%d",a[i]);
    }
}
