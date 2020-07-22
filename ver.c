#include<stdio.h>
#include<limits.h>
int main()
{
  int t;
  scanf("%d",&t);
  int mohan[1001],jeevan[1001];
  int sumM=INT_MIN,sumJ=INT_MIN;
  for(int i=0;i<t;i++)
  {
    scanf("%d",&mohan[i]);
    if(sumM<mohan[i])
    {
      sumM=mohan[i];
    }
  }
  for(int i=0;i<t;i++)
  {
    scanf("%d",&jeevan[i]);
    if(sumJ<jeevan[i])
    {
      sumJ=jeevan[i];
    }
  }
  int cnt=0;
  if(sumJ>sumM)
  {

    for(int i=0;i<t;i++)
    {
        if(jeevan[i]<=sumM)
        {
          cnt++;
        }


    }
    printf("%d\n",t-cnt);
  }
  else if(sumM>sumJ)
  {
    for(int i=0;i<t;i++)
    {
        if(mohan[i]<=sumJ)
        {
          cnt++;
        }


    }
     printf("%d\n",t-cnt);
  }
  else
  {
    printf("0\n");
  }

}
