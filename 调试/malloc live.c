#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()   //C语言无法输出指针所指向的空间的大小！
{
    char* a;
    a = (char*)malloc(1114*sizeof(char));
//    char a[1114];
    scanf("%s",a);
//    printf("The size of string that a point to is : %d\n",sizeof(a));
    printf("\"%s\"'s length is : %d.\n",a,strlen(a));


    free(a);    //堆上分配的空间要手动释放，栈上的空间由系统释放





    return 0;
}
