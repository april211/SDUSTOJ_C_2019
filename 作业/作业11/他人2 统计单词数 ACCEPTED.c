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
          if(ispunct(str[i])!=0||isspace(str[i])!=0)//�Ǳ����Ż����ǿհ׷�
          {
              while(ispunct(str[i])!=0 || isspace(str[i])!=0)//��i�������Ǳ����Ż��߿հ׷���λ��
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

              count++;//��������һ
          }



      }
        printf("%d\n",count);
        memset(str,0,sizeof(str));

    }

}
