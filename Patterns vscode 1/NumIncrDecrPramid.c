// 1
// 121
// 12321
// 1234321
// 123454321

#include <stdio.h>
int main() {
    int i, j;

    // Loop to iterate through each row
    for (i = 1; i <= 5; i++) {
        // Loop to print the numbers for each row
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Loop to print the numbers in reverse order (except for the first digit)
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Move to the next line after completing each row
        printf("\n");
    }

    return 0;
}