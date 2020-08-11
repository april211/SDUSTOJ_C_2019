#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int array1[1000];
int pai(int p, int grade1, int array[])
{
    int i=0, sum = 0,grade2=0;
    grade2= grade1- 9;
    if(grade1== 59)
        grade2= 0;
    if(grade1== 99)
        grade1 = 100;
    for(i = 0; i < p; i++)
        if(array[i] <= grade1 && array[i] >= grade2)
            sum++;
    if(grade1== 100)
        printf("Excellent : ");
    else if(grade1 == 89)
        printf("Good : ");
    else if(grade1== 79)
        printf("Average : ");
    else if(grade1== 69)
        printf("Pass : ");
    else if(grade1== 59)
        printf("Failing : ");

    printf("%d\n", sum);
    if(sum == 0)  return 0;
    else
    {
        for(i = 0;; i++)
        {
            if(array[i] <= grade1 && array[i] >= grade2)
            {
                printf("%d", array[i]);
                break;
            }
        }
        for(i =i+1; i < p; i++)
            if(array[i] <= grade1 && array[i] >= grade2)
                printf(", %d", array[i]);
        printf("\n");
        return 0;
    }

}
int main()
{
    int  i=0, j, grade,flag=0;
    for(i = 0; scanf("%d", &array1[i]) != EOF; i++);
    {
        grade = 99;
        for(j = 1; j <= 5; j++, grade= grade-10)
        {
            pai(i, grade, array1);
        }

    }

    return 0;
}
