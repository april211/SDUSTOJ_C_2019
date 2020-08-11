#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double x1,y1,x2,y2;
    double x0,y0,R;
    double d,D;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    scanf("%lf %lf %lf",&x0,&y0,&R);
    d=fabs((y1-y2)*x0+(x2-x1)*y0+(x1*y2-x2*y1))/(sqrt((y1-y2)*(y1-y2)+(x1-x2)*(x1-x2)));
    if(d>=R-0.001&&d<=R+0.001)printf("Tangency");
    if((d-R)>0.001)printf("Disjoint");
    if((d-R)<-0.001)printf("Interseetion");










    return 0;
}

