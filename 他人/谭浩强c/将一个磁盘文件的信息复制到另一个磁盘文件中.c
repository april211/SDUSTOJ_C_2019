#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in = NULL, *out = NULL;
    char ch, infile[150]={0}, outfile[150]={0};
    printf("��������ļ������֣�");
    gets(infile);
    printf("��������ļ������֣�");
    gets(outfile);
    in = fopen(infile, "r");
    out = fopen(outfile, "w");
    if(in == NULL || out == NULL)
    {
        printf("Cannot open this file!\n");
        exit(0);
    }
    ch = fgetc(in);
    while(!feof(in))    //����Ƿ��ļ�β��ע�⣬����EOF(-1).
    {                            //feof�����ȿ������ж϶������ļ��ֿ������ж��ı��ļ���
        fputc(ch, out);
        putchar(ch);     //���ز���ֵ
        ch = fgetc(in);
    }
    putchar(10);
    fclose(in);
    fclose(out);

    return 0;
}
