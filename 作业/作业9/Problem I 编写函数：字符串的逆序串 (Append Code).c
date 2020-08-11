#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_STR_LEN 200
char * str_rev(char * t, char * s)//°Ñ×Ö·û´®sÄæÐò¸´ÖÆµ½×Ö·û´®tÖÐ
{
     int i,j;
     j=0;
     for(i=strlen(s)-1;i>=0;i--)
     {
         if(i==0)
         {
             t[j+1]=0;
         }
         t[j++]=s[i];
     }
     return t;
}

int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    gets(s);
    p = str_rev(str, s);
    puts(p);
    puts(str);
    return 0;
}

