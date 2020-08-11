#include <stdio.h>
int main()
{
    int n,a,b,s,i,k,m,o;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
       scanf("%d %d %d %d",&a,&b,&n,&s);
           m=s/n;
           o=s%n;
        if(i==k)
        {
 
            if(m<=a && o<=b && m*n+o==s)
            {
                printf("YES");
 
            }
            else if(s/n>a && s–n*a<=b)
            {
              printf("YES");
            }
            else
            {
                printf("NO");
            }
        }
        else
        {
            if(m<=a && o<=b && m*n+o==s)
            {
                printf("YES\n");
 
            }
            else if(s/n>a && s–n*a<=b)
            {
              printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
 
 
 
 
    return 0;