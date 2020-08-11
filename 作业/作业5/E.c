#include <stdio.h>
int digit_sum(int x)
{
    int sum = 0,b;
    while(x != 0)
    {
        sum=sum+x%10;
        x=x/10;
    }
    if(sum>=10)
    {
        x=sum;
        sum=digit_sum(x);
    }

    return sum;
}




int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", digit_sum(n));
    return 0;
}

