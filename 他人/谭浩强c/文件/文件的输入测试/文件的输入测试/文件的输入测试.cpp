// �ļ����������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
    FILE *fp;
    char ch, filename[150];
	int haha();      //��������
	int nono();

    printf("���������õ��ļ��� ��");
    gets(filename);
    fp = fopen(filename , "a");     //ָ���ļ��򿪷�ʽΪADD~
    if(fp == NULL)
    {
        printf("Cannot open this file!\n");
		nono();
        exit(0);
    }

    printf("������һ��׼���洢�����̵��ַ�������#��������");

    ch = getchar();

    while(ch != '#')
    {
        fputc(ch , fp);   //�����ַ���ӵ����ļ���ĩβ
        putchar(ch);    //���ز����ַ�
        ch = getchar();   //������һ���ַ�
    }

    fclose(fp);
    putchar('\n');
	haha();




	return 0;
}

//F:\���\����\C\����\̷��ǿc\���ļ���д�ַ���test file0��.txt

