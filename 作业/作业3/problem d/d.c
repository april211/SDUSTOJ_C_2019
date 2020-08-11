#include <stdio.h>
int main()
 {
   unsigned long long n,sum;
    scanf("%llu",&n);
    (n%2==0)?(sum=(n/2)*(n+1)):(sum=n*((n+1)/2));

    printf("%llu",sum);



    return 0;
  }
