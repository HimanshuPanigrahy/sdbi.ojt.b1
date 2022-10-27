#include<stdio.h>
void factorial(int*);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    factorial(n);
    return 0;
}
void factorial(int *n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
}
 