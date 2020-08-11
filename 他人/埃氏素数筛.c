#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_SIZE 30000000

int prime[MAX_SIZE] = {0};
int array[MAX_SIZE] = {0};

int main()
{
    int i,j;
    int num;
    int ceil;
    scanf("%d",&num);
    ceil = (int)(sqrt(num) + 0.5);      //设定因数上限，强制四舍五入保险一下
    array[0] = array[1] = -1;    //0 and 1 are both not primes.
    for(i=2; i<=ceil; i++)
    {
        if(array[i]==0)         //this can be easily forget,but it is very important.
            for(j = i*i; j <=num; j+=i)//j==num
            {
                array[j]=-1;
            }
     //else (array[i]==-1),不需要
    }
    //核心代码完成
         j = 0;
     for(i=2;i<=num;i++)
     {
         if(array[i]==0)
         {
             prime[j++]=i;//整理数据，制表
         }
     }
     for(i=0;i<j;i++)//进行一般的打印输出
     {
         if(i==0)
            printf("%d",prime[i]);
         else
            printf(" %d",prime[i]);

     }

     return 0;
}
//疑点一：根据埃氏筛的定义，只需枚举不大于sqrt(n)内的所有素数，将其倍数剔除掉，最终留下的都是素数，
//为什么只需枚举到sqrt(n)呢？
//原因是任何一个合数至少有一个不大于sqrt(n)的最小素因子，我们可以通过这个最小素因子来筛掉这个合数。
//
//疑点二：第二重循环为什么不是从j=2*i或者是j=k*i(k<i)开始以增量i向上筛掉合数？
//因为k<i，如果k是素数，那么k*i在之前早就被筛掉了；
//如果k是合数，同理k*i至少已被前面某个较小素的因子给筛掉了，所以j从i*i开始向上枚举。
//尽管这样，埃氏筛法避免不了重复筛掉元素这个多余的操作。
//最后注意一下，第二种方法中第一重循环i要小于maxn，因为要保存maxn内的所有素数嘛，
//如果还是i*i<maxn，那么保存的只是sqrt(n)内的所有素数而已。
//现在问：如果要求1e7内所有的素数，那么仍采用埃氏筛法？恐怕有点不太好卡时间······
//一般会超时，而欧拉筛可以把时间卡得刚刚好，时间复杂度是O(n)，即保证了每个合数只被筛掉一次。
//期待地搓搓小手，欧拉筛（线性筛）终于压轴出场了
