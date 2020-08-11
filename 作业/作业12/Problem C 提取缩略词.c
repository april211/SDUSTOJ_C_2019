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
int judgeword(char*l,char*r,char*w1,char*w2)//p0+1���������ҵ�һ���ַ�λ�ã�p1-1����������һ���ַ�λ�ã�p3+1�ڵ�һ����д��ĸ����p0-2�����һ����д��ĸ��
{
    int c=0;//cpk
    if(l>r||w1>w2) return 0;
    while(l<=r && w1<=w2)//�жϿ�����д�������ڵĿ���ȫ���Ƿ�ƥ��
    {
        if( *w1++ != toupper(*l++) )
        {
            c++;//cia
             return 0;
        }

        while(*l!=' ' && *l!='-')//���������һ��������
        {
             l++;
        }//��ʱlָ��ո����һ�����ַ�

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
        if((p0=strchr(p0,'(') )==NULL) break;//����ַ������Ƿ��������
        if((p1=strchr(p0,')') )==NULL) break;//��������������ָ��p0��������λ�ã�p1��������λ��
            p3=p0-2;   //��������£���ʱ��p3��������ǰ�Ŀո�֮ǰһλ
        if(p3-p>=0 && *(p3+1)==' ')//����ǰ���дʺ�һ���ո�
        {
            while( p3-p>=0 && isupper(*(p3))!=0 )
            {
                  p3--;//�����ƶ�p3����д��ĸ��ǰһλ
            }

        }

        else
        {
            isabb=0;
        }

        if( islower(*(p3))!=0 )//����ǰ����Сд��ĸ�Ŀ϶�������д��
        {
            isabb=0;
        }

        if(isabb!=0 && judgeword(p0+1,p1-1,p3+1,p0-2)!=0)//p0+1���������ҵ�һ���ַ�λ�ã�p1-1����������һ���ַ�λ�ã�p3+1�ڵ�һ����д��ĸ����p0-2�����һ����д��ĸ��
        {
            if(count==0)
            {
                printf("Abbreviation ==> Full Name\n");
            }

                printf("%d:",++count);
                  *(p0-1)='\0';
            if(count/10==0)//��������Ǹ�λ��ʱ
            {
                printf("%10s",p3);
            }

            else if(count/100==0)//2λ���֣����Ƹ�ʽ�����Դʸ���������100��ע��else if
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



