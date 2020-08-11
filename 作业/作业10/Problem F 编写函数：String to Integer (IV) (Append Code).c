#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX_STR_LEN 101
int strToInt(char str[], int base)
{
	int i,j,k;
    int c=0;
    int weishu=0;
    int ans=0;
    int flag1=0,flag2=0;
    int kkk[MAX_STR_LEN]= {0};
    if(str[0]==0)
        return 0;
    else
    {
        for(i=0; i<strlen(str); i++)
        {
            if(i==0)
            {
                if(str[0]=='+')
                {
                    flag1++;
                    continue;
                }
                if(str[0]=='-')
                {
                    flag2++;
                    continue;
                }
            }
            if(str[i]!='0')
                break;
            if(str[i]=='0') //记录最后一个前导零的位置
            {
                c++;
            }
        }
        if(flag1==0 && flag2==0)//没有正负号
        {
        	if(base==10) 
        	{
        		  for(j=c; j<strlen(str); j++)
             {
                 if(str[j]<'0' || str[j]>'9')
                    continue;
                 if(str[j]>='0' && str[j]<='9')
                {
                    kkk[weishu]=str[j]-'0';
                    weishu++;
                }

             }
              if(weishu==0)
                  return 0;
              else
              {
                for(k=weishu-1; k>=0; k--)
                {
                    ans=ans+kkk[weishu-1-k]*(int)(pow(10,k));
                }
                return ans;
              }
	    	}
	    	if(base==2)
	    	{
	    		for(j=c; j<strlen(str); j++)
              {
                 if(str[j]<'0' || str[j]>'1')
                    continue;
                 if(str[j]>='0' && str[j]<='1')
                {
                    kkk[weishu]=str[j]-'0';
                    weishu++;
                }

              }
              if(weishu==0)
                  return 0;
              else
              {
                for(k=weishu-1; k>=0; k--)
                {
                    ans=ans+kkk[weishu-1-k]*(int)(pow(2,k));
                }
                return ans;
              }
			}
	    	if(base==16)
	    	{
	    		 for(j=c; j<strlen(str); j++)
              {
                 if(str[j]>='0' && str[j]<='9')
                {
                //	printf("====%d====\n",kkk[weishu]);
                    kkk[weishu]=str[j]-'0';
                    weishu++;
                }
                if(str[j]>='A' && str[j]<='F')
                {
                	kkk[weishu]=str[j]-55;
                //	printf("====%d====\n",kkk[weishu]);
                    weishu++;
				}
				if(str[j]>='a' && str[j]<='f')
				{
					//printf("====%d====\n",kkk[weishu]);
					kkk[weishu]=str[j]-87;
                    weishu++;
				}

              }
              if(weishu==0)
                  return 0;
              else
              {
                for(k=weishu-1; k>=0; k--)
                {
                    ans=ans+kkk[weishu-1-k]*(int)(pow(16,k));
                }
                return ans;
              }
			}
	    	if(base==8)
	    	{
	    		for(j=c; j<strlen(str); j++)
              {
                 if(str[j]<'0' || str[j]>'7')
                    continue;
                 if(str[j]>='0' && str[j]<='7')
                {
                    kkk[weishu]=str[j]-'0';
                    weishu++;
                }

              }
              if(weishu==0)
                  return 0;
              else
              {
                for(k=weishu-1; k>=0; k--)
                {
                    ans=ans+kkk[weishu-1-k]*(int)(pow(8,k));
                }
                return ans;
              }
			}
            
        }
        if(flag1==1 && flag2==0)
        {
        	if(base==10)
          {
        		for(j=c+1; j<strlen(str); j++)
            {
                if(str[j]<'0' || str[j]>'9')
                    continue;
                if(str[j]>='0' && str[j]<='9')
                {
                    kkk[weishu]=str[j]-'0';
                    weishu++;
                }

            }
            if(weishu==0)
                return 0;
            else
            {
                for(k=weishu-1; k>=0; k--)
                {
                    ans=ans+kkk[weishu-1-k]*(int)(pow(10,k));
                }
                return ans;
            }
		  }
		  if(base==2)
		  {
		  	   for(j=c+1; j<strlen(str); j++)
              {
                 if(str[j]<'0' || str[j]>'1')
                    continue;
                 if(str[j]>='0' && str[j]<='1')
                {
                    kkk[weishu]=str[j]-'0';
                    weishu++;
                }

              }
              if(weishu==0)
                  return 0;
              else
              {
                for(k=weishu-1; k>=0; k--)
                {
                    ans=ans+kkk[weishu-1-k]*(int)(pow(2,k));
                }
                return ans;
              }
		  }
		  if(base==8)
		  {
		  	    for(j=c+1; j<strlen(str); j++)
              {
                 if(str[j]<'0' || str[j]>'7')
                    continue;
                 if(str[j]>='0' && str[j]<='7')
                {
                    kkk[weishu]=str[j]-'0';
                    weishu++;
                }

              }
              if(weishu==0)
                  return 0;
              else
              {
                for(k=weishu-1; k>=0; k--)
                {
                    ans=ans+kkk[weishu-1-k]*(int)(pow(8,k));
                }
                return ans;
              }
		  }
		  if(base==16)
		  {
		  	      for(j=c+1; j<strlen(str); j++)
              {
                 
                 if(str[j]>='0' && str[j]<='9')
                {
                    kkk[weishu]=str[j]-'0';
                    weishu++;
                }
                if(str[j]>='A' && str[j]<='F')
                {
                	kkk[weishu]=str[j]-55;
                    weishu++;
				}
				if(str[j]>='a' && str[j]<='f')
				{
					kkk[weishu]=str[j]-87;
                    weishu++;
				}

              }
              if(weishu==0)
                  return 0;
              else
              {
                for(k=weishu-1; k>=0; k--)
                {
                    ans=ans+kkk[weishu-1-k]*(int)(pow(16,k));
                }
                return ans;
              }
		  }
             
        }
         if(flag1==0 && flag2==1)
        {
        	if(base==10)
          {
        		for(j=c+1; j<strlen(str); j++)
            {
                if(str[j]<'0' || str[j]>'9')
                    continue;
                if(str[j]>='0' && str[j]<='9')
                {
                    kkk[weishu]=str[j]-'0';
                    weishu++;
                }

            }
            if(weishu==0)
                return 0;
            else
            {
                for(k=weishu-1; k>=0; k--)
                {
                    ans=ans+kkk[weishu-1-k]*(int)(pow(10,k));
                }
                return -ans;
            }
	      }
	      if(base==2)
	      {
	      	   for(j=c+1; j<strlen(str); j++)
              {
                 if(str[j]<'0' || str[j]>'1')
                    continue;
                 if(str[j]>='0' && str[j]<='1')
                {
                    kkk[weishu]=str[j]-'0';
                    weishu++;
                }

              }
              if(weishu==0)
                  return 0;
              else
              {
                for(k=weishu-1; k>=0; k--)
                {
                    ans=ans+kkk[weishu-1-k]*(int)(pow(2,k));
                }
                return -ans;
              }
		  }
	      if(base==8)
	      {
	      	    for(j=c+1; j<strlen(str); j++)
              {
                 if(str[j]<'0' || str[j]>'7')
                    continue;
                 if(str[j]>='0' && str[j]<='7')
                {
                    kkk[weishu]=str[j]-'0';
                    weishu++;
                }

              }
              if(weishu==0)
                  return 0;
              else
              {
                for(k=weishu-1; k>=0; k--)
                {
                    ans=ans+kkk[weishu-1-k]*(int)(pow(8,k));
                }
                return -ans;
              }
		  }
	      if(base==16)
	      {
	      	     for(j=c+1; j<strlen(str); j++)
              {
                 //if(str[j]<'0' || str[j]>'9' || str[j]<'A' || str[j]>'F' || str[j]<'a' || str[j]>'f')
                 //   continue;
                 if(str[j]>='0' && str[j]<='9')
                {
                    kkk[weishu]=str[j]-'0';
                    weishu++;
                }
                if(str[j]>='A' && str[j]<='F')
                {
                	kkk[weishu]=str[j]-55;
                    weishu++;
				}
				if(str[j]>='a' && str[j]<='f')
				{
					kkk[weishu]=str[j]-87;
                    weishu++;
				}

              }
              if(weishu==0)
                  return 0;
              else
              {
                for(k=weishu-1; k>=0; k--)
                {
                    ans=ans+kkk[weishu-1-k]*(int)(pow(16,k));
                }
                return -ans;
              }
		  }
             
        }

    }
}
int main()
{
    int base;
    char s[MAX_STR_LEN];
    while( (scanf("%d:", &base) != EOF) && (gets(s) != NULL) )
        printf("%d\n", strToInt(s, base));
    return 0;
}

