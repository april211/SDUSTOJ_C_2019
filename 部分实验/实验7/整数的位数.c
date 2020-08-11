#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int digits(int n)
{
    int i,flag=0;
     for(i=1;i<=10;i++)
    {
        if(n<0) n=abs(n);
        n=n/10;
        if(n==0) break;
        flag++;
    }



  return flag+1;

}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digits(num));
}
