#include <stdio.h>
int main()
{
int i,j,a[2][3],b[2][3],c[2][3];


printf("Enter first matrix\n");
for (i=0;i<2;i++) // recieving values of two matrix
    {
        for(j=0;j<3;j++) 
        {
            scanf("%d",&a[i][j]);
        }
    }

printf("Enter second matrix\n");
    for (i=0;i<2;i++) 
    {
        for(j=0;j<3;j++) 
        {
            scanf("%d",&b[i][j]);
        }
    }

printf("The first matrix is :\n"); // printing the entered matrix values
for (i=0;i<2;i++) 
    {
        for(j=0;j<3;j++) 
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

printf("The second matrix is :\n");
for (i=0;i<2;i++) 
    {
        for(j=0;j<3;j++) 
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

printf("The third matrix is :\n");
for (i=0;i<2;i++) // addition of two matrix
    {
        for(j=0;j<3;j++) 
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
            
        }
        printf("\n");
    }

}