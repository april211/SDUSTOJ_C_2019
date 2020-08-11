#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define max(a,b) ((a)>(b)?(a):(b))
struct CPLX
{
      int x,y;

}ab,cd,ef;
void get_cplx(struct CPLX *cx)
{
	int a,b;
	//scanf("%d %d",&cx->x,&cx->y);
    scanf("%d %d",&a,&b);
    cx->x=a;
    cx->y=b;
}
void put_cplx(struct CPLX cx)
{
     printf("%d %d\n",cx.x,cx.y);
}
struct CPLX add_cplx(struct CPLX cx1, struct CPLX cx2)
{
    struct CPLX ef;
    ef.x=cx1.x+cx2.x;
    ef.y=cx1.y+cx2.y;


   return ef;
};
struct CPLX sub_cplx(struct CPLX cx1, struct CPLX cx2)
{
     struct CPLX ef;
    ef.x=cx1.x-cx2.x;
    ef.y=cx1.y-cx2.y;


   return ef;
};
int main()
{
    struct CPLX ab, cd;
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        get_cplx(&ab);
        get_cplx(&cd);
        put_cplx( add_cplx(ab, cd) );
        put_cplx( sub_cplx(ab, cd) );
    }
    return 0;
}

