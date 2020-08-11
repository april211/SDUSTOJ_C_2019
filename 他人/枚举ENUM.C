#include<stdio.h>

enum DAY
{
    MON=1, TUE, WED, THU, FRI, SAT, SUN
};

int main()
{
    enum DAY day;
    scanf("%d", &day);
    printf("Input Repeat: %d\n", day);
//    for(int i = MON; i <= FRI; i++)
//    {
//        printf("%d,", i);
//    }
    switch(day)
    {
    case MON:
        printf("Today is Monday.");
        break;
    case TUE:
        printf("Today is Tuesday.");
        break;
    case WED:
        printf("Today is Wednesday.");
        break;
    case THU:
        printf("Today is Thursday.");
        break;
    case FRI:
        printf("Today is Friday.");
        break;
    case SAT:
        printf("Today is Saturday.");
        break;
    case SUN:
        printf("Today is Sunday.");
        break;
    default:
        printf("INPUT ERROR!!");
    }


    return 0;
}
