#include <stdio.h>
int main() {
    
    int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int size = sizeof(array) / sizeof(array[0]);

    for(int i=0;i<size;++i){
        if((i + 1)%5==0){ // Check if the current index is a multiple of 5 
            i+=2; // Skip the next two elements
        }
            printf("%d ", array[i]);
                  
    }
    return 0;
}

