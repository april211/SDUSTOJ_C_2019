#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char num[40];
    int weishu,a,i;
    long long int sum;
    while(scanf("%s",num)!=EOF)
    {
        sum=0;
        weishu=strlen(num);
       for(i=weishu-1;i>=0;i--)
        {
           a=num[i]-'0';
           sum=sum+a*(pow(2,weishu-1-i));//数据过大可能溢出，一般(int)pow
        }
        printf("%lld\n",sum);
    }




   return 0;
}
