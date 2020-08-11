#include <stdio.h>
int n;
int h, m, s;
int main()
{
    int n;
    int h, m, s;
    while(1)
    {
        scanf("%d", &n);
        if(n == 0) break;//无定义
        n--;   //第一秒是00:00:00
        s = n % 60;//从秒开始，取余操作
        n=n/60;
        m = n % 60;
        n =n/60;
        h =n;
        printf("%02d:%02d:%02d\n", h, m, s);
    }
    return 0;
}

//    n--;
//    time.hh=n/3600;
//    time.mm=(n%3600)/60;
//    time.ss=(n%3600)%60;
