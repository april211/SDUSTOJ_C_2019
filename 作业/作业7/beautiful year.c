#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,z,w,i,a;
    while(scanf("%d",&a)!=EOF)
    {
        i=a;
         while(1)
      {
          i++;
        z=i%10;
        y=(i/10)%10;
        x=(i/100)%10;
        w=(i/1000)%10;
        if(z!=y && z!=x && z!=w && y!=x && y!=w && x!=w)
        {
            printf("%d\n",i);
            break;
        }
      }
    }









    return 0;
}
