#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
int main()
{
    char str[108];
    while(gets(str)!=NULL)
    {
        int add[20];
        char a[5],b[5],c[5],d[5];
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        memset(d,0,sizeof(d));
        int count0=0,count1=0,count2=0;
        int i,j,k,m;
        int num1=0,num2=0,num3=0,num4=0;
        int len=strlen(str);
       // printf("%d",len);
        if(len>15 || len<7)//长度不符合要求
        {
            printf("NO\n");

            memset(str,0,sizeof(str));
            continue;
        }
        else
        {
            for(i=0; i<len; i++)
            {
                if(str[i]!='0' && str[i]!='1'&& str[i]!='2'&&str[i]!='3'&&str[i]!='4'&&str[i]!='5'&&str[i]!='6'&&str[i]!='7'&&str[i]!='8'&&str[i]!='9'&&str[i]!='.')
                {
                    printf("NO\n");//含有非法字符
                    count1++;

                    break;
                }
            }
            if(count1!=0)
            {
                memset(str,0,sizeof(str));
                continue;
            }


            for(i=0; i<len; i++)
            {
                if(str[i]=='.')
                {
                    add[i]++;//记录点的位置
                    count0++;//记录点的个数
                }
            }
            if(count0!=3)//点的个数不符合要求
            {
                printf("NO\n");
                memset(str,0,sizeof(str));
                continue;

            }
            else//现在字符中必有三个点和若干数字字符，且其位置已经由整型数组记录下来。
            {
                 if(add[0]==1 || add[len-1]==1 || (str[0]=='0' && str[1]!='.'))//保证字符串首尾不是点
                 {
                      printf("NO\n");
                      memset(str,0,sizeof(str));
                      continue;
                 }
                 else
                 {
                     for(j=0;j<len-1;j++)
                     {
                         if(add[j]==1 && add[j+1]==1)//保证两个点不连续
                         {
                             count2++;
                             break;
                         }
                     }
                     if(count2!=0)
                     {
                        printf("NO\n");
                        memset(str,0,sizeof(str));
                        continue;
                     }
                     else
                     {
                         for(i=0;i<len;i++)
                         {
                             if(str[i]=='.') break;
                             a[i]=str[i];
                             //printf("%c-",a[i]);
                         }
                         //printf("\n=========\n");
                         //printf("%c\n",str[i+2]);
                         for(j=i+1;j<len;j++)
                         {
                             if(str[j]=='.') break;
                             b[j-i-1]=str[j];
                              //printf("%c-",b[j-i-1]);
                         }
                        // printf("\n=========\n");
                         if((strlen(b)!=1 && b[0]=='0')||(strlen(b)>3))
                         {
                             printf("NO\n");
                             memset(str,0,sizeof(str));
                             continue;
                         }
                         for(k=j+1;k<len;k++)
                         {
                             if(str[k]=='.') break;
                             c[k-j-1]=str[k];
                             //printf("%c-",c[k-j-1]);
                         }
                        // printf("\n=========\n");
                         //printf("\n%c-\n",c[0]);
                         //printf("\n%d\n",strlen(c));
                         if((strlen(c)!=1 && c[0]=='0')||(strlen(c)>3))
                         {
                             printf("NO\n");
                             memset(str,0,sizeof(str));
                             continue;
                         }
                         //printf("%c\n",str[13]);
                         //printf("%d\n",k+1);
                         for(m=k+1;m<len;m++)
                         {
                             d[m-k-1]=str[m];
                             //printf("%c-",d[m-k-1]);
                         }
                         //printf("\n=========\n");
                         if((strlen(d)!=1 && d[0]=='0')||(strlen(d)>3))
                         {
                             printf("NO\n");
                             memset(str,0,sizeof(str));
                             continue;
                         }
                         for(i=0;i<strlen(a);i++)
                         {
                             num1=num1+(a[i]-'0')*(int)(pow(10,strlen(a)-i-1)+0.5);
                         }
                            //printf("%d\n",num1);
                         for(i=0;i<strlen(b);i++)
                         {
                             num2=num2+(b[i]-'0')*(int)(pow(10,strlen(b)-i-1)+0.5);
                         }
                         // printf("%d\n",num2);
                         for(i=0;i<strlen(c);i++)
                         {
                             num3=num3+(c[i]-'0')*(int)(pow(10,strlen(c)-i-1)+0.5);
                         }
                        // printf("%d\n",num3);
                         //printf("%d\n",strlen(d));

                         for(i=0;i<strlen(d);i++)
                         {
                             num4=num4+(d[i]-'0')*(int)(pow(10,strlen(d)-i-1)+0.5);
                         }
                        //printf("%d\n",num4);
                         if((num1>255)||(num2>255)||(num3>255)||(num4>255))
                         {
                             printf("NO\n");//printf("=========\n");
                             memset(str,0,sizeof(str));
                             continue;
                         }
                         else
                         {
                             printf("YES\n");
                             memset(str,0,sizeof(str));
                         }
                     }
                 }
            }



        }
    }






    return 0;
}
