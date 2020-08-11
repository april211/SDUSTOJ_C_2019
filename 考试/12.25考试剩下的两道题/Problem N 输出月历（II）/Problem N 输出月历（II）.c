#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int is_leap_year(int year)
{
    if( year%400==0 || (year%4==0 && year%100!=0) )
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int year,month;
    int i,j,k;
    while(~scanf("%d %d",&year,&month))
    {
        if(month==2)
        {
            if(is_leap_year(year)==1)
            {

            }
            else
            {

            }
        }
        else//month!=2
        {
             printf("Sun Mon Tue Wen Thu Fri Sat");
             if()


        }

    }





}
