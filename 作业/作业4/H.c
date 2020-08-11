#include <stdio.h>
#include <math.h>

    int put_sum(int x, int y)
{
    return printf("%d\n",x + y);
}

int main()
{
    int a, b;

    while(scanf("%d%d", &a, &b) != EOF)
        put_sum(a, b);

    return 0;
}














