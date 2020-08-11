#include <stdio.h>
#include <conio.h>
int judge(char a[][21],int i,int j,int M)
{
 int x=0;
 for(int k=0;k<M;k++)
 {
  if(a[i][k]==a[j][k])
   x++;
 }
 return x;
}
void main()
{
 char name[21];
 char ans[100][21];
 int Y[100],L[100];
 int i,j,l=0,N,M;
 char ch=0;
 printf("输入用户个数和问题个数：");
 scanf("%d %d",&N,&M);
 for(j=0;j<N;j++)
 {
  scanf("\n");
  int p=0;
  while((ch=getchar())!=' ')
  {
   name[21*j+p]='!';
   name[21*j+(p++)]=ch;
  }
  L[j]=p;
  if(l<p)
   l=p;
  for(i=0;i<M;i++)
  {
   scanf(" %c",&ans[j][i]);
  }
  scanf(" %d",&Y[j]);
  if(j==(N-1))
   goto loop;
 }
loop:for(i=0;i<N;i++)
 {
  for(int j=0;j<L[i];j++)
  {
   printf("%c",name[21*i+j]);
  }
  for(j=L[i];j<l;j++)
  {
   printf(" ");
  }
  int f=0;
  for(j=0;j<M;j++)
  {
   if(i==j)
    continue;
   if(judge(ans,i,j,M)>=Y[i])
   {
    if(f==0)
     printf(":");
    else
     printf(",");
    for(int m=0;m<L[j];m++)
    {
     printf("%c",name[21*j+m]);
    }
    f++;
   }
  }
  if(f==0)
   printf(":NONE!\n");
  else
   printf("\n");
 }
}
