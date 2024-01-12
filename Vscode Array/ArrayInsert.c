#include<stdio.h>
int main()
{

int i,a[20],position,value,n;

printf("Enter array limit : ");
scanf("%d",&n);
printf("Enter array values :\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

printf("Enter the position you want to insert the element : ");
scanf("%d",&position);
printf("Enter the value to insert : ");
scanf("%d",&value);

for(i=n-1;i>=position-1;i--){
a[i+1]=a[i];
}
a[position-1]=value;

printf("Resultant array is :\n");
for(i=0;i<=n;i++){
printf("%d\t",a[i]);
}

}
