#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str0[1114]={0}, str1[1114]={0}, str2[1114]={0};
    //用法一：取指定长度的字符串
    sscanf("12345","%4s",str0);
    printf("用法一\nstr0 = %s\n",str0);
    memset(str0, 0 ,sizeof(str0));

    //用法二：格式化时间
    int year,month,day,hour,minute,second;
    sscanf("2013/02/13 14:55:34","%d/%d/%d %d:%d:%d", &year, &month, &day, &hour, &minute, &second);
    printf("用法二\ntime = %d-%d-%d %d:%d:%d\n", year, month, day, hour, minute, second);

    //用法三：读入字符串
    sscanf("12345","%s",str0);
    printf("用法三\nstr0 = %s\n",str0);
    memset(str0, 0 ,sizeof(str0));

    //用法四：%*d 和 %*s 加了星号 (*) 表示跳过此数据不读入. (也就是不把此数据读入参数中)
    sscanf("12345acc","%*d%s",str0);
    printf("用法四\nstr0 = %s\n",str0);
    memset(str0, 0 ,sizeof(str0));

    //用法五：取到指定字符为止的字符串。如在下例中，取遇到'+'为止字符串。
    sscanf("12345+acc","%[^+]",str0);
    printf("用法五\nstr0 = %s\n",str0);
    memset(str0, 0 ,sizeof(str0));

    //用法六：取到指定字符集为止的字符串。如在下例中，取遇到小写字母为止的字符串。
    sscanf("12345+acc121","%[^a-z]",str0);
    printf("用法六\nstr0 = %s\n",str0);
    memset(str0, 0 ,sizeof(str0));

    //用法七
    printf("请输入一段字符 ：");
    gets(str0);
    sscanf(str0, "%s%s", str1, str2);
    printf("用法七\nstr1 = %s, str2 = %s\n",str1, str2);
    memset(str0, 0 ,sizeof(str0));
    memset(str1, 0 ,sizeof(str1));
    memset(str2, 0 ,sizeof(str2));

    //用法八
    sscanf("123456abcdefBFRGTY7890","%[1-9a-z]",str0);
	printf("str0 = %s\n",str0);    //123456abcdef
	memset(str0, 0 ,sizeof(str0));





    return 0;
}
