#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define MAX_SIZE 10000001
char str[MAX_SIZE];
int cnt[106]={0};
char putstr(char*a,char*b)
{

    while(a<=b)
        putchar(*a++);
    return 0;
}
int judgeword(char*l,char*r,char*w1,char*w2)//p0+1在左括号右第一个字符位置，p1-1在右括号左一个字符位置，p3+1在第一个大写字母处，p0-2在最后一个大写字母处
{
    int c=0;//cpk
    if(l>r||w1>w2) return 0;
    while(l<=r && w1<=w2)//判断可疑缩写与括号内的可疑全称是否匹配
    {
        if( *w1++ != toupper(*l++) )
        {
            c++;//cia
             return 0;
        }

        while(*l!=' ' && *l!='-')//跳过后面的一部分内容
        {
             l++;
        }//此时l指向空格或者一个连字符

        l++;
    }
    if(l<=r)
        return 0;
    else
        return 1;

}
int find(char*p)
{
    char* p0 = p;
    char* p1 = NULL;
    int count = 0;
    while(p0!=NULL)
    {
        int isabb = 1;
        char*p3=NULL;
        if((p0=strchr(p0,'(') )==NULL) break;//检查字符串中是否包含括号
        if((p1=strchr(p0,')') )==NULL) break;//若满足条件，则指针p0在左括号位置，p1在右括号位置
            p3=p0-2;   //正常情况下，此时的p3在左括号前的空格之前一位
        if(p3-p>=0 && *(p3+1)==' ')//括号前面有词和一个空格
        {
            while( p3-p>=0 && isupper(*(p3))!=0 )
            {
                  p3--;//最终移动p3到大写字母的前一位
            }

        }

        else
        {
            isabb=0;
        }

        if( islower(*(p3))!=0 )//括号前面是小写字母的肯定不是缩写词
        {
            isabb=0;
        }

        if(isabb!=0 && judgeword(p0+1,p1-1,p3+1,p0-2)!=0)//p0+1在左括号右第一个字符位置，p1-1在右括号左一个字符位置，p3+1在第一个大写字母处，p0-2在最后一个大写字母处
        {
            if(count==0)
            {
                printf("Abbreviation ==> Full Name\n");
            }

                printf("%d:",++count);
                  *(p0-1)='\0';
            if(count/10==0)//序号数还是个位数时
            {
                printf("%10s",p3);
            }

            else if(count/100==0)//2位数字，控制格式，缩略词个数不超过100，注意else if
            {
                printf("%9s",p3);
            }

            *(p0-1)=' ';
             printf(" ==> ");
                putstr(p0+1,p1-1);
                  printf("\n");
        }
            p0=p1+1;
    }
    if(count==0)
        printf("There is no abbreviations in this text.\n");

    return 0;
}
int main()
{
    char ch=0;
    int i=0;
    memset(str,0,sizeof(str));
    while(~(ch=getchar()))
    {
        str[i++]=(ch=='\n')?' ':ch;
    }

    str[i]='\0';
    find(str);


    return 0;
}



