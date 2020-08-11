#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 3000
char s1[MAX_SIZE];
char s2[MAX_SIZE];
int main()
{
    char a;
    int i=0,j=0,k=0;
    int num=0;
    int count=0;
    while((a = getchar()) != EOF)
    {
        if(!isspace(a))
        {
            s1[k++] = a;
            count++;
        }

    }
    if(count!=0)
    {
        for(i=0;i<k;i++)
        {
            s2[i]=-2;
        }

    }

    for(i = 0; i < k; i++)
    {
        if(s1[i] == '{')
        {
            if(num == 0)
            {
                printf("{\n");
            }

            else
            {
                printf(" {\n");
            }


                  num++;

            for(j = 0; j < num; j++)
            {
                 printf("    ");//print the tab
            }

        }
        else if(s1[i] == ',')
        {
             printf(", ");
        }

        else if(s1[i] == ';')
        {
            printf(";\n");
            for(j=0;j<num-1;j++)
            {
                 printf("    ");
            }

            if(s1[i+1]!='}')
            {
                 printf("    ");
            }

        }
        else if(s1[i]=='}')
        {
            num--;
            printf("}");
            if(num==0 && i!=k-1)
            {
                printf("\n");
            }

        }
        else
        {
            printf("%c", s1[i]);
        }

    }





    return 0;
}
