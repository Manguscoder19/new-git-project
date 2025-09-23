#include<stdio.h>

void main()
{
    float a[10],avg; float n;
    printf(" this code will find average of maximun 10 numbers\nenter how many numbers you want to enter'''\n");
    scanf("%f",&n);
   
for(int i=0;i<n;i++)
  {  printf("\n Storing the values:Enter your %d value\n",i+1);
scanf("%f",&a[i]);
  }
  for(int j=0;j<n;j++)
  {
      avg=avg+a[j];

  }
  avg=avg/n;
  printf("The average of the numbers is %f",avg);

}

