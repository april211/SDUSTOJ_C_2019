#include <stdio.h>
#include <string.h>
int main()
{   char str1[27];
    char str2[27];
    int a,b;
    gets(str1);
    gets(str2);
    a=strlen(str1);
    b=strlen(str2);
    if(a>=b)
    {
        puts(str1);
        puts(str2);

    }
    else
        {
          puts(str2);
          puts(str1);
        }










 return 0;
}
