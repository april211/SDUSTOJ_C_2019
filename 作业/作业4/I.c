#include <stdio.h>
#include <math.h>

    int put_int_sum(int x, int y)
{   int z;
    z=x+y;
    if(z==0){return z;}
    else{return printf("%d\n",z);}
}

int main()
{
    int a, b;
    while(scanf("%d%d", &a, &b))
        if(put_int_sum(a, b) == 0)
            break;
    return 0;
}













