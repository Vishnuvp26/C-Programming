#include <stdio.h> 
int main() 
{ 
	int A[] = { 5,6,0,4,0,6,0 }; 
	int i,temp,j=0,n=7;

	for(i=0;i<n;i++){ 
		if(A[i]==0){ 
			temp = A[i]; // Partitioning the array 
			A[i] = A[j]; 
			A[j] = temp; 
			j++; 
		} 
	} 

    printf("After moving zero to end :\n");
	for(i=0;i<n;i++){ 
		printf("%d", A[i]); // Print the array 
	} 

	return 0; 
}
