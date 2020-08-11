#include <stdio.h>
#define MAX_STR_LEN 106
char * str_cat(char * t, char * s, int n)
{
     int len0=0,len1=0;
     int i,j,k;
     while(1)
     {
         len0++;
         if(s[len0]==0) break;

     }
    // printf("%d\n",len0);
    while(1)
     {
         len1++;
         if(t[len1]==0) break;

     }
    // printf("%d\n",len1);
     if(n<=len0)
     {

         j=len1;
         for(i=0;i<n;i++)
         {

             t[j]=s[i];
             j++;

         }
         t[j]=0;

     }
     else
     {
         j=len1-1;
          for(i=0;i<len0;i++)
         {
             j++;
             t[j]=s[i];

         }
         t[j+1]=0;
     }

     return t;
}



int main()
{
    int n;
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(scanf("%d", &n) != EOF && getchar())
    {
        gets(s);
        gets(str);
        p = str_cat(str, s, n);
        puts(p);
        puts(str);
    }
    return 0;
}
