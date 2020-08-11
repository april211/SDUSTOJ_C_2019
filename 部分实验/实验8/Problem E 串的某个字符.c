#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[200];
    int i,len;
    scanf("%s",a);
    len=strlen(a);
    scanf("%d",&i);
    if(i-1>=len)
    {
         printf("error");
    }
    else
    {
          printf("%c",a[i-1]);
    }







    return 0;
}
