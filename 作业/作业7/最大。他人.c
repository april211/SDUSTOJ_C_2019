#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char max[2000];
    char min[2000],temp[2000];
    int flag=1;
    int m,n;
    int low,high;
    while(scanf("%s",temp)!=EOF)
    {
        m=strlen(temp);
        n=0;
        for(n=0; temp[n]=='0'&&n<m; n++);
        m-=n;
        //�����һ��0λ��
        if(m==0)
        {
            temp[0]='0';
            temp[1]=0;
            n=0;

        }//���������ַ���Ϊȫ0
        if(flag==1)
        {
            strcpy(max,&temp[n]);
            strcpy(min,&temp[n]);
            low=m;
            high=m;
            flag=0;
        }//��һ�ֽ����ʹ���Ϊ�����С�ַ�����Ϊ������ַ���
        if(m<low)
        {
            low=m;
            strcpy(min,&temp[n]);
        }
        if(m>high)
        {
            high=m;
            strcpy(max,&temp[n]);
        }//���ȴ��ڻ�С��ֱ�ӽ���
        if(m==low)
        {
            if(strcmp(&temp[n],min)<0)
            {
                strcpy(min,&temp[n]);
            }
        }
        if(m==high)
        {
            if(strcmp(&temp[n],max)>0)
                strcpy(max,&temp[n]);
        }

    }
    printf("The maximum value is : %s\n",max);
    printf("The minimum value is : %s\n",min);

    return 0;
}

