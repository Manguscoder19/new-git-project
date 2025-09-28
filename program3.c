#include<stdio.h>
void main()
{
    int n;
    printf("this code will determine if the number is even or odd\n");
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("You entered: %d\n",n);
    if(n%2==0)
    {
        printf("%d is even\n",n);
    }
    else
    {
        printf("%d is odd\n",n);
    }
}
