#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    long long int sum,x,each,i;

    while(scanf("%lld",&x)!=EOF)
    {

        sum=0;
        i=0;
        while(x!=0)
        {

            each=x%10;
            x=x/10;
            sum=sum+each*(int)(pow(2,i));//ע�����������intǿ��ת��
            i++;


        }
            printf("%lld\n",sum);

    }





    return 0;
}
