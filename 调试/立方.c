#include <stdio.h>
int main()
{
    unsigned long long int k,i;
    {
        for(i=0;i<=1000000;i++)
        {
            k=i*i*i;
            if(k%1000==111)
            {
                printf("%llu\n",i);
                printf("%llu\n",k);
            }

        }
    }

    return 0;
}
