#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()   //C�����޷����ָ����ָ��Ŀռ�Ĵ�С��
{
    char* a;
    a = (char*)malloc(1114*sizeof(char));
//    char a[1114];
    scanf("%s",a);
//    printf("The size of string that a point to is : %d\n",sizeof(a));
    printf("\"%s\"'s length is : %d.\n",a,strlen(a));


    free(a);    //���Ϸ���Ŀռ�Ҫ�ֶ��ͷţ�ջ�ϵĿռ���ϵͳ�ͷ�





    return 0;
}
