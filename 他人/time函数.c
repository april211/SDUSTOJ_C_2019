#include <stdio.h>
#include <time.h>

int main ()
{
  long int seconds;     //time_t seconds;

  seconds = time(NULL);
  printf("�� 1970-01-01 ���Сʱ�� = %ld\n", seconds/3600);
  printf("�� 1970-01-01 ��ķ����� = %ld\n", seconds/60);
  printf("�� 1970-01-01 ������� = %ld\n", seconds);

  return 0;
}
