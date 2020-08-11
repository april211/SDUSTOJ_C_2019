#include <stdio.h>
struct test
{
    int num1;
    double num2;
};
int edit(struct test* t)
{
    for(int i=0;i<=1;i++)
    {
        t[i].num1+=1;
        t[i].num2+=1.0;
    }


    return 1;
}


int main()
{
    struct test t1;
    struct test array[2];
    int i;
    for(i=0;i<=1;i++)
    {
        scanf("%d %lf",&array[i].num1,&array[i].num2);
    }
    printf("Before the edit: \n");
    for(i=0;i<=1;i++)
    {
        printf("%d %lg\n",array[i].num1,array[i].num2);
    }

    edit(array);

    printf("After the edit: \n");
     for(i=0;i<=1;i++)
    {
        printf("%d %lg\n",array[i].num1,array[i].num2);
    }

    return 0;
}


//9 0.9
//10 0.11
//Before the edit:
//9 0.9
//10 0.11
//After the edit:
//10 1.9
//11 1.11
//
//Process returned 0 (0x0)   execution time : 10.493 s
//Press any key to continue.
