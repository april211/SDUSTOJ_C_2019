#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char str[1006];
    int i,count=0,len;
    memset(str,0,sizeof(str));
    while(gets(str)!=NULL)
    {
        len=strlen(str);
        count=0;
      for(i=0;i<len;i++)
      {
          if(ispunct(str[i])!=0||isspace(str[i])!=0)//是标点符号或者是空白符
          {
              while(ispunct(str[i])!=0 || isspace(str[i])!=0)//将i调到不是标点符号或者空白符的位置
              {
                  i++;
              }

          }
          else
          {
              while(ispunct(str[i])==0 && isspace(str[i])==0)
              {
                  i++;
              }

              count++;//单词数加一
          }



      }
        printf("%d\n",count);
        memset(str,0,sizeof(str));

    }

}
