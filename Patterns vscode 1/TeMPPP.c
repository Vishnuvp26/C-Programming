#include <stdio.h>

int main() {
    int n = 7, i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {}
            if (i % 2 == 0) {
                printf("* ");
            } else {
                printf("%d ", j * i);
            }
        
        printf("\n");
    }

    return 0;
}