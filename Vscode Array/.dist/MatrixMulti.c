#include <stdio.h>

int main() 
{
    int A[3][3], B[3][3], result[3][3];

    // Input for Matrix A
    printf("Enter elements of Matrix A (3x3):\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input for Matrix B
    printf("Enter elements of Matrix B (3x3):\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Multiplication of Matrices A and B
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) 
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Displaying intermediate values for debugging
    printf("\nMatrix A:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    // Displaying the result
    printf("\nResultant Matrix C (A * B):\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
