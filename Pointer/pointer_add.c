#include<stdio.h>
int main()
{
    int a,b;
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    int res;
    printf("Enter two numbers to add");
    scanf("%d %d",&a,&b);
    res=*ptr1+*ptr2;
    printf("Sum of %d and %d is %d\n",*ptr1,*ptr2,res);
}