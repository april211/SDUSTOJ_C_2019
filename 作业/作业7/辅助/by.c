#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,i,w,x,y,z;
    for(i=1000;i<=9000;i++)
    {
        z=i%10;
        y=(i/10)%10;
        x=(i/100)%10;
        w=(i/1000)%10;
        if(z!=y && z!=x && z!=w && y!=x && y!=w && x!=w)
        {
            printf("%d\n",i);
        }
    }






    return 0;
}
