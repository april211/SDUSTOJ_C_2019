#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)
struct Student
{
    long num;
    float score;
    struct Student* next;
};
int n;                                       //nΪ�ڵ�����Ϊȫ�ֱ������������
struct Student* creat(void)
{
    struct Student* head;
    struct Student* p1,* p2;
    n = 0;
    p1 = p2 = (struct Student*)malloc(LEN);
    scanf("%ld,%f", &p1->num, &p1->score);
    head = NULL;                                  //���Ƚ�ͷָ�븳Ϊ��ָ�룬�����һ��num����0�������ֱ�ӷ��ص���һ����ָ��
    while(p1->num != 0)                           //������num==0Ϊֹ
    {
        n++;
        if(n==1)
        {
            head = p1;                                //head==p1==p2
            p1 = (struct Student*)malloc(LEN);
            scanf("%ld,%f", &p1->num, &p1->score);   //������һ��ѭ����ʼǰ�����num�Ƿ����0
        }
        else//n>=2
        {
            p2->next = p1;                             //����ǰ�������ڴ�ռ�
            p2 = p1;                               //p2�ƶ���p1��λ��
            p1 = (struct Student*)malloc(LEN);     //p1ָ��һ���µ��ڴ�ռ�
            scanf("%ld,%f", &p1->num, &p1->score);     //������һ��ѭ����ʼǰ�����num�Ƿ����0

        }

    }

    p2->next = NULL;
    return head;
}
int main()
{
    struct Student* pt,* temp;
    pt = creat();      //����һ����������
    temp = pt;
    if(temp != NULL)
    {
        do                                                                //����Ĺ̶������ʽ
        {
            printf("\nnum:%ld\nscore:%5.1f\n", temp->num, temp->score);
            temp = temp->next;
        }while(temp != NULL);
    }


    return 0;
}


//���ʱ�����ܣ�
//       for(int i=1;i<=n;i++)
//    {
//        printf("\nnum:%ld\nscore:%5.1f\n",temp->num,temp->score);
//        temp++;
//    }



//1001,67.5
//1003,87
//1004,99.5
//0,0
//
//num:1001
//score: 67.5
//
//num:1003
//score: 87.0
//
//num:1004
//score: 99.5
//
//Process returned 0 (0x0)   execution time : 5.004 s
//Press any key to continue.

