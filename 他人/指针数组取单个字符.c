#include<stdio.h>
#include<stdlib.h>
int main(){
    char *strs[5];
    int i;
    for(i=0; i<5; i++){
        strs[i] = malloc(100*sizeof(char));
        scanf("%s",strs[i]);
    }
    //printf("��һ���ַ����ĵ�һ���ַ�:%c\n",*strs[0]);
    printf("��һ���ַ����ĵ�һ���ַ�:%c\n",strs[0][0]);
    //ALSO CORRECT:printf("�ڶ����ַ����ĵڶ����ַ�:%c\n",*(strs[1]+1));
    printf("�ڶ����ַ����ĵڶ����ַ�:%c\n",strs[1][1]);
    printf("�������ַ����ĵ������ַ�:%c\n",*(strs[2]+2));
    printf("���ĸ��ַ����ĵڶ����ַ�:%c\n",*(strs[3]+1));
    return 0;
}
