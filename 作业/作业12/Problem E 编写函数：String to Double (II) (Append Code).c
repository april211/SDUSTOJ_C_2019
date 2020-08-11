#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>
#define  MAX_STR_LEN  30
char dt[MAX_STR_LEN];
int p[MAX_STR_LEN]={0};
double strToDouble(char str[])
{
    int i,j=0,k=0;
    int len=0;
    double wei=0.1;
    double sum=0,sum1=0,sum2;

    if(str[0]=='\0')
        return 0;

    len=strlen(str);
    for(i=0; i<len; i++)
    {
        if(isdigit(str[i])!=0)
        {
            sum=sum*10+(str[i]-'0');
        }
        if(str[i]=='.')
        {
            i++;
               break;
        }
    }
    for( ; i<len; i++)
    {
        if(isdigit(str[i])!=0)
        {
            sum1=sum1+(str[i]-'0')*wei;
            wei=wei/10;
        }
    }
          sum2=sum+sum1;

    for(i=0; i<len; i++)
    {
        if(isdigit(str[i])!=0)  break;//符号位一定是在数字的前面
        else if( str[i]=='+' || str[i]=='-' )
        {
            if(str[i]=='-')
                sum2=-sum2;
            break;//只取一个符号
        }
    }
    return sum2;
}

int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%lg\n", strToDouble(s));
    return 0;
}
