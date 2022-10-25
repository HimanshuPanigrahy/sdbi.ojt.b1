#include<stdio.h>
void odd_even(int*);
int main()
{
    int a,temp;
    printf("Enter a number");
    scanf("%d",&a);
    odd_even(&a);
    return 0;
}
void odd_even(int *a)
{
    int temp;
    temp=*a % 2;
    if(temp==0)
        printf("%d is even number",*a);
    else
        printf("%d is odd number", *a);
}