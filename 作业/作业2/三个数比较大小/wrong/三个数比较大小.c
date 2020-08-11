#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d",&a,&b,&c);
    if(b<a && a<c)
      { d=b;
        e=a;
        f=c;
        printf("%d %d %d",d,e,f);
      }

    else if(a<b && b<c)
     {  d=a;
        e=b;
        f=c;
        printf("%d %d %d",d,e,f);

     }
    else if(c<a && a<b)
     {  d=c;
        e=a;
        f=b;
        printf("%d %d %d",d,e,f);
     }
    else if(b<c && c<a)
     {  d=b;
        e=c;
        f=a;
        printf("%d %d %d",d,e,f);

     }
    else if(a<c && c<b)
     {  d=a;
        e=c;
        f=b;
        printf("%d %d %d",d,e,f);

     }
    else if(c<b && b<a)
     {  d=c;
        e=b;
        f=a;
        printf("%d %d %d",d,e,f);

     }

       return 0;
}
