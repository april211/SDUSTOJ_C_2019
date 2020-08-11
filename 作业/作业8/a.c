#include <stdio.h>
int compare(int *min, int *mid, int *max)//a,b,c;要求最终从小到大输出
{
    int temp=0;
    if(*min>=*mid)
    {
        if(*mid>=*max)
        {
            temp=*min;
            *min=*max;
            *max=temp;
        }
        else
        {
            if(*max>=*min)
            {
                temp=*mid;
                *mid=*min;
                *min=temp;

            }
            else//min>max>mid
            {
                temp=*mid;
                *mid=*min;
                *min=temp;//mid>max>min
                temp=*mid;
                *mid=*max;
                *max=temp;


            }
        }
    }
    else//*min<*mid
    {
        if(*max>=*mid)
        {
                *min=*min;
                *mid=*mid;
                *max=*max;
        }
        else//max<mid
        {
            if(*max>=*min)//mid>max>min
            {
                temp=*mid;
                *mid=*max;
                *max=temp;
            }
            else//max<min<mid
            {
                temp=*mid;
                *mid=*min;
                *min=temp;
                temp=*min;
                *min=*max;
                *max=temp;
            }
        }
    }

    return 0;
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    compare(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
