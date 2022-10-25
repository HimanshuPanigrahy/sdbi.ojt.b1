#include<stdio.h>
void prime(int*);
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    prime(&a);
    return 0;
}
void prime(int *a)
{
    int flag=0;
    if(*a==0||*a==1)
    {
        flag=1;
    }
    for(int i=2;i<=*a/2;i++)
    {
        if(*a%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d is a prime number",*a);
    else
        printf("%d is not a prime number",*a);

}