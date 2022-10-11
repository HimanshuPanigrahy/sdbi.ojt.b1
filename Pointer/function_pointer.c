#include<stdio.h>

int (*fnptr)(int,int);


int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int pro(int a,int b)
{
    return a*b;
}

int div(int a,int b)
{
    return a/b;
}

int main()
{
    int x,y,z,s;
    fnptr=&add;
    x=(*fnptr)(20,10);
    printf("%d\n",x);
    fnptr=&sub;
    y=(*fnptr)(20,10);
    printf("%d\n",y);
    fnptr=&pro;
    z=(*fnptr)(20,10);
    printf("%d\n",z);
    fnptr=&div;
    s=(*fnptr)(20,10);
    printf("%d\n",s);
   
}