#include <stdio.h>
int main ()
{
    int a[5],b[5],c[5],i;

    printf("Enter 1st array\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter 2nd array\n");
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }

  for(i=0;i<5;i++){
    c[i]=a[i];
    a[i]=b[i];
    b[i]=c[i];
    }

printf("array 1 : ");
for(i=0;i<5;i++){
    printf("%d\t",a[i]);
}

printf("array 2 : ");
for(i=0;i<5;i++){
    printf("%d\t",b[i]);
}

}