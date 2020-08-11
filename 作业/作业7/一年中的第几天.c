#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i,n,y,m,d,sum,flag;
    scanf("%d",&n);
    flag=n;
    for(i=n; i>=1; i--) //   if(x%400==0 || x%4==0 && x%100!=0)
    {
        scanf("%d-%d-%d",&y,&m,&d);
        sum=0;
        if(i!=1)
        {
            if(y<=0 || m<=0 || d<=0 || d>=32 || m>=13)
            {
                printf("error date!\n");
            }
            else
            {
                if((m==4&&d==31)||(m==6&&d==31)||(m==9&&d==31)||(m==11&&d==31)||(m==2 && d==30)||(m==2 && d==31))
                {
                    printf("error date!\n");
                }
                else if(y%400==0 || y%4==0 && y%100!=0)
                {

                        if(m==1)
                        {
                            printf("%d\n",d);
                        }
                        if(m==2)
                        {
                            printf("%d\n",31+d);
                        }
                        if(m==3)
                        {
                            printf("%d\n",60+d);
                        }
                        if(m==4)
                        {
                            printf("%d\n",91+d);
                        }
                        if(m==5)
                        {
                            printf("%d\n",121+d);
                        }
                        if(m==6)
                        {
                            printf("%d\n",152+d);
                        }
                        if(m==7)
                        {
                            printf("%d\n",182+d);
                        }
                        if(m==8)
                        {
                            printf("%d\n",213+d);
                        }
                        if(m==9)
                        {
                            printf("%d\n",244+d);
                        }
                        if(m==10)
                        {
                            printf("%d\n",274+d);
                        }
                        if(m==11)
                        {
                            printf("%d\n",305+d);
                        }
                        if(m==12)
                        {
                            printf("%d\n",335+d);

                        }

                }
                else//如果不是闰年
                {
                    if(m==2 && d==29)
                    {
                        printf("error date!\n");
                    }
                    else
                    {
                        if(m==1)
                        {
                            printf("%d\n",d);
                        }
                        if(m==2)
                        {
                            printf("%d\n",31+d);
                        }
                        if(m==3)
                        {
                            printf("%d\n",59+d);
                        }
                        if(m==4)
                        {
                            printf("%d\n",90+d);
                        }
                        if(m==5)
                        {
                            printf("%d\n",120+d);
                        }
                        if(m==6)
                        {
                            printf("%d\n",151+d);
                        }
                        if(m==7)
                        {
                            printf("%d\n",181+d);
                        }
                        if(m==8)
                        {
                            printf("%d\n",212+d);
                        }
                        if(m==9)
                        {
                            printf("%d\n",243+d);
                        }
                        if(m==10)
                        {
                            printf("%d\n",273+d);
                        }
                        if(m==11)
                        {
                            printf("%d\n",304+d);
                        }
                        if(m==12)
                        {
                            printf("%d\n",334+d);
                        }
                    }
                }
            }

        }
        if(i==1)
        {
            if(y<=0 || m<=0 || d<=0 || d>=32 || m>=13)
            {
                printf("error date!");
            }
            else
            {
                if((m==4&&d==31)||(m==6&&d==31)||(m==9&&d==31)||(m==11&&d==31)||(m==2 && d==30)||(m==2 && d==31))
                {
                    printf("error date!");
                }
                else if(y%400==0 || y%4==0 && y%100!=0)
                {

                        if(m==1)
                        {
                            printf("%d",d);
                        }
                        if(m==2)
                        {
                            printf("%d",31+d);
                        }
                        if(m==3)
                        {
                            printf("%d",60+d);
                        }
                        if(m==4)
                        {
                            printf("%d",91+d);
                        }
                        if(m==5)
                        {
                            printf("%d",121+d);
                        }
                        if(m==6)
                        {
                            printf("%d",152+d);
                        }
                        if(m==7)
                        {
                            printf("%d",182+d);
                        }
                        if(m==8)
                        {
                            printf("%d",213+d);
                        }
                        if(m==9)
                        {
                            printf("%d",244+d);
                        }
                        if(m==10)
                        {
                            printf("%d",274+d);
                        }
                        if(m==11)
                        {
                            printf("%d",305+d);
                        }
                        if(m==12)
                        {

                            printf("%d",335+d);

                        }


                }
                else//如果不是闰年
                {
                    if(m==2 && d==29)
                    {
                        printf("error date!");
                    }
                    else
                    {
                        if(m==1)
                        {
                            printf("%d",d);
                        }
                        if(m==2)
                        {
                            printf("%d",31+d);
                        }
                        if(m==3)
                        {
                            printf("%d",59+d);
                        }
                        if(m==4)
                        {
                            printf("%d",90+d);
                        }
                        if(m==5)
                        {
                            printf("%d",120+d);
                        }
                        if(m==6)
                        {
                            printf("%d",151+d);
                        }
                        if(m==7)
                        {
                            printf("%d",181+d);
                        }
                        if(m==8)
                        {
                            printf("%d",212+d);
                        }
                        if(m==9)
                        {
                            printf("%d",243+d);
                        }
                        if(m==10)
                        {
                            printf("%d",273+d);
                        }
                        if(m==11)
                        {
                            printf("%d",304+d);
                        }
                        if(m==12)
                        {
                            printf("%d",334+d);
                        }
                    }
                }
            }

        }


    }





    return 0;
}
