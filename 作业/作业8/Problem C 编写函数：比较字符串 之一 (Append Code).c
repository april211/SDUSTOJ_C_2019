#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_STR_LEN 500
int str_cmp(char s1[], char s2[])
{
     int i=-1;
     while(1)
     {
         i++;
         if(s1[i]!=s2[i] && s1[i]!=0 && s2[i]!=0)
         {
             return (s1[i]-s2[i]);
         }
         if(s1[i]==0 && s2[i]!=0) return ('\0'-s2[i]);
         if(s1[i]!=0 && s2[i]==0) return (s1[i]-'\0');
         if(s1[i]==0 && s2[i]==0) break;
     }







     return 0;
}
int main()
{
    char str1[MAX_STR_LEN], str2[MAX_STR_LEN];
    while( (gets(str1) != NULL) && (gets(str2) != NULL) )
        printf("%d\n", str_cmp(str1, str2));
    return 0;
}
