#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[200];
    int len,i;
    gets(a);
    len=strlen(a);
    for(i=len-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }










    return 0;
}
