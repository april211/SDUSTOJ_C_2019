#include <stdio.h>
#include <malloc.h>
#include <string.h>

const int MAX = 4;

int main()
{
    char* names[6];
//    char *names[] =//const
//    {
//        "Zara Ali",
//        "Hina Ali",
//        "Nuha Ali",
//        "Sara Ali",
//    };

    for(int i = 0;i< MAX;i++)
    {
        //printf("688\n");
        names[i]=(char*)malloc(1114*sizeof(char));//ָ������������ֵ�Ļ���Ҫ��ǰ����ռ�
        memset(names[i],0,sizeof(names[i]));
        gets(names[i]);
    }

    for ( int i = 0; i < MAX; i++)
    {
        printf("Value of names[%d] = %s\n", i, names[i] );
    }
    return 0;
}



//test:
//wugan
//wuguangkai
//211
//I wish Pengpeng will have a good life in Heaven!   2019��12��29��20:28:00
