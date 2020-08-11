// 文件的输入测试.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
    FILE *fp;
    char ch, filename[150];
	int haha();      //函数声明
	int nono();

    printf("请输入所用的文件名 ：");
    gets(filename);
    fp = fopen(filename , "a");     //指定文件打开方式为ADD~
    if(fp == NULL)
    {
        printf("Cannot open this file!\n");
		nono();
        exit(0);
    }

    printf("请输入一个准备存储到磁盘的字符串（以#结束）：");

    ch = getchar();

    while(ch != '#')
    {
        fputc(ch , fp);   //将该字符添加到该文件的末尾
        putchar(ch);    //返回测试字符
        ch = getchar();   //接收下一个字符
    }

    fclose(fp);
    putchar('\n');
	haha();




	return 0;
}

//F:\编程\代码\C\他人\谭浩强c\向文件读写字符（test file0）.txt

