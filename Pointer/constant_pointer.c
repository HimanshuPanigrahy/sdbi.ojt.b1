#include<stdio.h>
int main()
{
    int a=4;
    int const *p;
    p=&a;
    printf("%d %p\n",a,p);
    ++p;
    ++*p;
    printf("%d %p\n",a,p);

}