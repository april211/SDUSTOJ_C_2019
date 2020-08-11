#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch, filename[150];

    printf("请输入所用的文件名 ：");
    gets(filename);
    fp = fopen(filename , "a");
    if(fp == NULL)
    {
        printf("Cannot open file!\n");
        exit(0);
    }

    printf("请输入一个准备存储到磁盘的字符串（以#结束）：");

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
