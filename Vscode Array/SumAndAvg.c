#include <stdio.h>

int main() {
    int a[10], i, limit;
    float avg, sum = 0;

    printf("Enter Array Limit: ");
    scanf("%d", &limit);

    printf("Enter Array Values:\n");
    for (i = 0; i < limit; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = sum / limit;

    printf("Sum is: %f\n", sum);
    printf("Average is: %f\n", avg);

    return 0;
}
