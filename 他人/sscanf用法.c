#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str0[1114]={0}, str1[1114]={0}, str2[1114]={0};
    //�÷�һ��ȡָ�����ȵ��ַ���
    sscanf("12345","%4s",str0);
    printf("�÷�һ\nstr0 = %s\n",str0);
    memset(str0, 0 ,sizeof(str0));

    //�÷�������ʽ��ʱ��
    int year,month,day,hour,minute,second;
    sscanf("2013/02/13 14:55:34","%d/%d/%d %d:%d:%d", &year, &month, &day, &hour, &minute, &second);
    printf("�÷���\ntime = %d-%d-%d %d:%d:%d\n", year, month, day, hour, minute, second);

    //�÷����������ַ���
    sscanf("12345","%s",str0);
    printf("�÷���\nstr0 = %s\n",str0);
    memset(str0, 0 ,sizeof(str0));

    //�÷��ģ�%*d �� %*s �����Ǻ� (*) ��ʾ���������ݲ�����. (Ҳ���ǲ��Ѵ����ݶ��������)
    sscanf("12345acc","%*d%s",str0);
    printf("�÷���\nstr0 = %s\n",str0);
    memset(str0, 0 ,sizeof(str0));

    //�÷��壺ȡ��ָ���ַ�Ϊֹ���ַ��������������У�ȡ����'+'Ϊֹ�ַ�����
    sscanf("12345+acc","%[^+]",str0);
    printf("�÷���\nstr0 = %s\n",str0);
    memset(str0, 0 ,sizeof(str0));

    //�÷�����ȡ��ָ���ַ���Ϊֹ���ַ��������������У�ȡ����Сд��ĸΪֹ���ַ�����
    sscanf("12345+acc121","%[^a-z]",str0);
    printf("�÷���\nstr0 = %s\n",str0);
    memset(str0, 0 ,sizeof(str0));

    //�÷���
    printf("������һ���ַ� ��");
    gets(str0);
    sscanf(str0, "%s%s", str1, str2);
    printf("�÷���\nstr1 = %s, str2 = %s\n",str1, str2);
    memset(str0, 0 ,sizeof(str0));
    memset(str1, 0 ,sizeof(str1));
    memset(str2, 0 ,sizeof(str2));

    //�÷���
    sscanf("123456abcdefBFRGTY7890","%[1-9a-z]",str0);
	printf("str0 = %s\n",str0);    //123456abcdef
	memset(str0, 0 ,sizeof(str0));





    return 0;
}
