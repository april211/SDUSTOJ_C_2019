#include <stdio.h>
struct test
{
    int num1;
    double num2;
};
int edit(struct test t)
{
    t.num1+=1;
    t.num2+=1.0;

    return 1;
}


int main()
{
    struct test t1;
    scanf("%d %lf",&t1.num1,&t1.num2);
    printf("Before the edit: %d %lg\n",t1.num1,t1.num2);
    edit(t1);
    printf("After the edit: %d %lg\n",t1.num1,t1.num2);

    return 0;
}

//9 0.9
//Before the edit: 9 0.9
//After the edit: 9 0.9
//
//Process returned 0 (0x0)   execution time : 6.491 s
//Press any key to continue.
