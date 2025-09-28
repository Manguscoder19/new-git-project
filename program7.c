#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    int temp;
    temp=a;
    a=b;
    b=temp; 
    printf("After swapping: a=%d, b=%d\n",a,b);
}
