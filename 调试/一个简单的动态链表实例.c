#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)
struct Student
{
    long num;
    float score;
    struct Student* next;
};
int n;                                       //n为节点数，为全局变量，方便计数
struct Student* creat(void)
{
    struct Student* head;
    struct Student* p1,* p2;
    n = 0;
    p1 = p2 = (struct Student*)malloc(LEN);
    scanf("%ld,%f", &p1->num, &p1->score);
    head = NULL;                                  //首先将头指针赋为空指针，如果第一个num就是0，到最后直接返回的是一个空指针
    while(p1->num != 0)                           //创建到num==0为止
    {
        n++;
        if(n==1)
        {
            head = p1;                                //head==p1==p2
            p1 = (struct Student*)malloc(LEN);
            scanf("%ld,%f", &p1->num, &p1->score);   //方便下一个循环开始前，检测num是否等于0
        }
        else//n>=2
        {
            p2->next = p1;                             //连接前后两块内存空间
            p2 = p1;                               //p2移动至p1的位置
            p1 = (struct Student*)malloc(LEN);     //p1指向一块新的内存空间
            scanf("%ld,%f", &p1->num, &p1->score);     //方便下一个循环开始前，检测num是否等于0

        }

    }

    p2->next = NULL;
    return head;
}
int main()
{
    struct Student* pt,* temp;
    pt = creat();      //创建一个线性链表
    temp = pt;
    if(temp != NULL)
    {
        do                                                                //链表的固定输出格式
        {
            printf("\nnum:%ld\nscore:%5.1f\n", temp->num, temp->score);
            temp = temp->next;
        }while(temp != NULL);
    }


    return 0;
}


//输出时，不能：
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

