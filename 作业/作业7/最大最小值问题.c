#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int comp(char p[],char q[])
{
    int a,b;
    a=strlen(p);
    b=strlen(q);
    if(a>b)
    {
       return 1;
    }
    if(a<b)
    {
       return -1;
    }
    if(a==b)
    {
        if(strcmp(p,q)>0)
            return 1;
        if(strcmp(p,q)<0)
            return -1;
    }
    return 0;

}
int q_zero(char s[])
{
     int len1,i,k;
     len1=strlen(s);

        if(s[0]!='0') return 1;
        while(s[0]=='0')
        {
            for(k=0;k<=len1-2;k++)
            {
                 s[k]=s[k+1];
            }
            s[len1-1]=0;


        }
        if(s[0]=='\0')//如果输入全是零，会导致执行完上述代码后出现这种情况
        {
            s[0]='0';
            s[1]=0;
        }

    return 1;
}
int main()
{
    int j,k,i,flag=0,c=0,len1,len2,len3;
    char n[2000],max[2000],min[2000];
    memset(n,0,sizeof(n));
    memset(max,0,sizeof(max));
    memset(min,0,sizeof(min));
    while(scanf("%s",n)!=EOF)
    {
        c++;
        if(flag==0)
        {
            flag++;
            q_zero(n);
            strcpy(max,n);
            strcpy(min,max);
            memset(n,0,sizeof(n));

        }
        else
        {
             q_zero(n);
            if(comp(n,max)==1)
            {
               memset(max,0,sizeof(max));
               strcpy(max,n);
            }
            if(comp(n,min)==-1)
            {
               memset(min,0,sizeof(min));
               strcpy(min,n);
            }
               memset(n,0,sizeof(n));
        }



    }
    if(c!=0)
    {
        printf("The maximum value is : ");
        for(k=0; k<strlen(max); k++)
        {
            printf("%c",max[k]);
        }
        printf("\n");
        printf("The minimum value is : ");
        for(j=0; j<strlen(min); j++)
        {
            printf("%c",min[j]);
        }
    }










    return 0;
}
