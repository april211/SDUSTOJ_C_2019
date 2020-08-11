#include<stdio.h>
#include<ctype.h>
#include<string.h>
char str[1006];
int main()
{

    int i;
    int count=0,zheng=0;
    int len;

    while(gets(str)!=NULL)
    {
        count=0;
        len=strlen(str);
        for(i=0; i<len; i++)
        {
            if(isspace(str[i])!=0||(ispunct(str[i])!=0 && str[i]!='-')||(ispunct(str[i])!=0 && str[i]!='_'))//它是字符或者空白符
            {
                zheng=0;
            }

            else if(zheng==0)    //前面是字符且单词数==1
            {
                zheng=1;
                  count++;
            }

        }
        printf("%d\n",count);
        memset(str,0,sizeof(str));

    }
    return 0;
}
