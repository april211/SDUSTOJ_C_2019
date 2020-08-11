#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define POINT struct POINT
POINT
{
    double x,y;



}p,q;
void input_point(POINT *pt)
{
    scanf("%lf %lf",&pt->x,&pt->y);

}

double distance(POINT p1,POINT p2)
{
    double ans;
    ans=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));

    return ans;

}

int main()
{
   POINT p,q;
   double dis;
   input_point(&p);
   input_point(&q);
   dis=distance(p,q);
   printf("%g",dis);
   return 0;
}
