#include <stdio.h>

int main()
 {
    int arr1[50];
    int i,k,n;

    printf("Size of the array :\n");
       scanf("%d",&n);
   
    printf("Input the elements in the array :\n");
       for(i=0;i<n;i++){
	      scanf("%d",&arr1[i]);
	    }
	    
    printf("Enter the Position :\n");
       scanf("%d",&k);
       
      for(i=k-1;i<n-1;i++){
	     arr1[i]=arr1[i+1];
      }

   printf(" Result : \n");
   for(i=0;i<n-1;i++){
	printf("%d\t", arr1[i]);
    }
   	
     return 0;
 }
