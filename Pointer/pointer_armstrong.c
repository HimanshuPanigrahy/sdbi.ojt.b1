#include<stdio.h>
void armstrong(int*);
int main()
{
    int r,t,temp,sum=0;
    printf("Enter the armostrong number: ");
    scanf("%d",&t);
    armstrong(&t);
}


void armstrong(int *n)
{
    int r,sum=0,temp;
    temp=*n;
    while(*n>0)
    {
        
        r=*n%10;
        sum=sum+(r*r*r);
        *n=*n/10;
    }
    if(temp==sum)
        printf("%d is an Armostrong number",temp);
    else
        printf("%d is Not an Armostrong number",temp);
}