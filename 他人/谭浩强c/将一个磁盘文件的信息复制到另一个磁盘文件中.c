#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in = NULL, *out = NULL;
    char ch, infile[150]={0}, outfile[150]={0};
    printf("输入读入文件的名字：");
    gets(infile);
    printf("输入输出文件的名字：");
    gets(outfile);
    in = fopen(infile, "r");
    out = fopen(outfile, "w");
    if(in == NULL || out == NULL)
    {
        printf("Cannot open this file!\n");
        exit(0);
    }
    ch = fgetc(in);
    while(!feof(in))    //检测是否到文件尾。注意，不是EOF(-1).
    {                            //feof函数既可用以判断二进制文件又可用以判断文本文件。
        fputc(ch, out);
        putchar(ch);     //返回测试值
        ch = fgetc(in);
    }
    putchar(10);
    fclose(in);
    fclose(out);

    return 0;
}
