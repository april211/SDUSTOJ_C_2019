#include <stdio.h>
#include <stdlib.h>
struct time
{
    int hh; // ʱ
    int mm; // ��
    int ss; //��
}time;

struct time to_time(int n)//���ﶨ���һ��Ϊ00:00:01
{
    //n--;
    time.hh=n/3600;
    time.mm=(n%3600)/60;
    time.ss=(n%3600)%60;
    return time;
};
int put_time(struct time tm)
{
    printf("%02d:%02d:%02d\n",tm.hh,tm.mm,tm.ss);
    return 0;
}
int main()
{
    int n;
    struct time tm;
    while(scanf("%d", &n) != EOF)
    {
        tm = to_time(n);
        put_time(tm);//put_time(time);
    }
    return 0;
}
