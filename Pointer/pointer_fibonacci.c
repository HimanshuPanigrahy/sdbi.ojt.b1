#include<stdio.h>
#include <Stdio.h>
void fibo_series_fun (int);
int main()
{
    int s;
 printf("Enter a Nth term:");
 scanf("%d",&s);
 fibo_series_fun (s);
 return 0;
}

void fibo_series_fun (int N)
{
  int i,c,a = -1, b = 1;
 for (i = 1; i <= N; i++)
   {
      c = a + b;
      printf("%d ", c);
      a = b;
      b = c;
   }

}