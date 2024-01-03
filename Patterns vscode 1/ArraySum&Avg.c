#include <stdio.h>
int main(void) 
{
  int i;
  float marks[5];
  float sum=0,avg;
  printf("Enter mark of 5 students");
  for(i=0;i<5;i++)
    {
      scanf("%f",&marks[i]);
    }
  for(i=0;i<5;i++)
    {
      sum=sum+marks[i];
    }
  avg=sum/5;
  printf("sum=%f",sum);
  printf("\n avg=%f",avg);
  return 0;
}