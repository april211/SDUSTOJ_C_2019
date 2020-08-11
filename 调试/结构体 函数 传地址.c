#include <stdio.h>
struct test
{
    int num1;
    double num2;
};
int edit(struct test* t)
{
    t->num1+=1;
    t->num2+=1.0;

    return 1;
}


int main()
{
    struct test t1;
    struct test* p=&t1;
    scanf("%d %lf",&p->num1,&p->num2);
    printf("Before the edit: %d %lg\n",p->num1,p->num2);
    edit(p);
    printf("After the edit: %d %lg\n",p->num1,p->num2);

    return 0;
}

//9 0.9
//Before the edit: 9 0.9
//After the edit: 10 1.9
//
//Process returned 0 (0x0)   execution time : 9.003 s
//Press any key to continue.

