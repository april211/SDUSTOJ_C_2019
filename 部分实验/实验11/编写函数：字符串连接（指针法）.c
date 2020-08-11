#include <stdio.h>
#define MAX_STR_LEN 106
char * str_cat(char * t, char * s, int n)
{
    int count=0;
    int i=0;
    char* rt=t,*rs=s;
    while(*rt!=0)
    {
        rt++;
    }
    while(*s!=0)
    {
        s++;
        count++;
    }
    //printf("%d\n",count);
    if(count<=n)
    {
        while(*rs!=0)
        {
            *rt=*rs;
             rs++;
             rt++;
        }
        *rt=0;
    }
    else
    {
        while(i<n)
        {
            *rt=*rs;
             rs++;
             rt++;
             i++;
        }
        *rt=0;
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
