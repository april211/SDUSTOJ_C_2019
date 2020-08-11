#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned int)time(NULL)*1000);//初始化种子为随机值,also: srand((unsigned int)time(0)),srand((unsigned int)getpid())
    int i = 0;
    for( ; i < 3; ++i)
    {
        int num = rand() % 6 + 25 ;//生成[25,30] n-m+1,m
        printf("%d ",num);
    }
    printf("\n");
    return 0;
}


//rand函数，C语言中用来产生一个随机数的函数。
//
//rand函数界限：stdlib.h头文件中有宏#define RAND_MAX 0x7fff
//                        rand产生一个0-0x7fff的随机数，即最大是32767的一个数


//rand函数调用
//rand()函数每次调用前都会查询是否调用过srand(seed)，是否给seed设定了一个值，如果有那么它会自动调用srand(seed)一次来初始化它的起始值
//若之前没有调用srand（seed），那么系统会自动给seed赋初始值，即srand（1）自动调用它一次



//srand函数
//    srand函数是随机数发生器的初始化函数，原型：
//void srand(unsigned int seed);
//这个函数需要提供一个种子，如srand（1），用1来初始化种子
//rand（）产生随机数时，如果用srand（seed）播下种子之后，一旦种子相同（下面的getpid方法），产生的随机数将是相同的。当然很多时候刻意让rand（）产生的随机数随机化，用时间作种子 srand（time（NULL）），这样每次运行程序的时间肯定是不相同的，产生的随机数肯定就不一样了。
//我们常常使用系统时间来初始化，使用time函数来获取系统时间，得到的值是一个时间戳，即从1970年1月1日0点到现在时间的秒数，然后将得到的time_t类型数据转化为(unsigned int)的数，然后再传给srand函数，用法如下：
//srand((unsigned int)time(NULL));//我们在使用rand和srand时，主要使用的就是这一种初始化方法！！
//如果仍然觉得时间间隔太小，可以在(unsigned)time(0)或者(unsigned)time(NULL)后面乘上某个合适的整数。 例如,srand((unsigned)time(NULL)*10)
//time的参数传NULL表示不需要经过参数获得到的time_t数据，time函数原型如下
//time_t time(time_t *tloc);//time_t类型被定义为一个长整型
//还有另外一种初始化种子的方式如下，用进程的pid作为种子值seed，在同一个程序中，这样的种子的值是相同的
//srand((unsigned int)getpid())
//
//rand函数的使用    
//如果想要表示一个数是从0开始到最大值的，比如说，想要产生一个0-99之间的随机数，那么用法如下
//int num = rand() % 100；
//如果想要产生一个数是从1开始到最大值的，比如说，想要产生一个1-100之间的随机数，那么用法如下
//int num = rand() % 100 + 1;
//需要注意最后+1和不+1的区别，+1的最小值是1，不+1的最小值是0




