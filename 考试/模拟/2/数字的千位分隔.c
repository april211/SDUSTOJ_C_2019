#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s2[30];
    int w=0;
    scanf("%d",&w);
    int j;
    getchar();
    while(w--)
    {
        scanf("%s",s2);
        int n=strlen(s2);
        for(j=0;j<n;j++)
        {
            printf("%c",s2[j]);
            if((n-j-1)%3==0 && j!=n-1)
            {
                printf(",");
            }
        }
        puts(" ");
    }



    return 0;
}

