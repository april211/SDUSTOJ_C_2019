#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch, filename[150];

    printf("���������õ��ļ��� ��");
    gets(filename);
    fp = fopen(filename , "a");
    if(fp == NULL)
    {
        printf("Cannot open file!\n");
        exit(0);
    }

    printf("������һ��׼���洢�����̵��ַ�������#��������");

    ch = getchar();

    while(ch != '#')
    {
        fputc(ch , fp);
        putchar(ch);
        ch = getchar();
    }

    fclose(fp);
    putchar('\n');


    return 0;
}
