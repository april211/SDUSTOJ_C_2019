#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    char s[100] = {0};
    char str[100] = {0};

    while(gets(s) != NULL)
    {

        sscanf(s, "%d.%d.%d.%d", &a, &b, &c, &d);
        sprintf(str, "%d.%d.%d.%d", a, b, c, d);
        printf("After edit :%s\n",str);
        if(strcmp(s, str) != 0)
        {
            printf("No!\n");
        }
        else
        {
            if(a < 0 || a > 255 || b < 0 || b > 255 || c < 0 || c > 255 || d < 0 || d > 255 )
            {
                printf("No!\n");
            }
            else
            {
                printf("Yes!\n");
            }
        }

    }






    return 0;
}
