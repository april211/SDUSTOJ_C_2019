#include <stdio.h>
int add(int n)
{
   static int s=0;

   s=s+n;
   return s;

}
int main()
{
    int min, max, sum;
    scanf("%d%d", &min, &max);
    while(min <= max)
        sum = add(min++);
    printf("%d", sum);
    return 0;
}
