#include <stdio.h>
int sum(int x, int y)
 {
     return x + y;
 }
 int main()
{
    int a, b;
     while(scanf("%d %d",&a,&b) != EOF)
         printf("%d\n", sum(a, b));
   return 0;
 }
