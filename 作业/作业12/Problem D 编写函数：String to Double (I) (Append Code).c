#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define MAX_STR_LEN 20
double strToDouble(char str[])
{
    int i,j,len,from=0,k=0,h=0;
    double sum=0,sum1=0;//sum为整数部分，sum1为小数部分
    double m=0.1;
    if(str[0]=='\0')
        return 0;
    if(str[0]=='+'||str[0]=='-')
        from=1;
    else
        from=0;
    len=strlen(str);
    for(i=from; i<len; i++)
    {
        if(isdigit(str[i])!=0)//如果该元素是数字
        {
            sum=sum*10+(str[i]-'0');//十分重要的思想：sum乘以10以后再加
        }

        if(str[i]=='.')
        {
            i++;
               break;
        }
    }
    for( ; i<len; i++)//小数部分
    {
        if(isdigit(str[i])!=0)
        {
            sum1=sum1+(str[i]-'0')*m;//*0.1,*0.01.....
            m=m/10;
        }
    }
    if(str[0]=='-')
        return (-1)*(sum+sum1);
    else
        return (sum+sum1);
}

int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%lg\n", strToDouble(s));
    return 0;
}
