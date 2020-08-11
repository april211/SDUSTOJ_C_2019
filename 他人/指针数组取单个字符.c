#include<stdio.h>
#include<stdlib.h>
int main(){
    char *strs[5];
    int i;
    for(i=0; i<5; i++){
        strs[i] = malloc(100*sizeof(char));
        scanf("%s",strs[i]);
    }
    //printf("第一个字符串的第一个字符:%c\n",*strs[0]);
    printf("第一个字符串的第一个字符:%c\n",strs[0][0]);
    //ALSO CORRECT:printf("第二个字符串的第二个字符:%c\n",*(strs[1]+1));
    printf("第二个字符串的第二个字符:%c\n",strs[1][1]);
    printf("第三个字符串的第三个字符:%c\n",*(strs[2]+2));
    printf("第四个字符串的第二个字符:%c\n",*(strs[3]+1));
    return 0;
}
