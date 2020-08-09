#include<iostream>
#define MAX 505
using namespace std;
int prime[MAX];
//author: Prasad
void sieve()
{
  for(int i=0;i<MAX;i++)
  {
    prime[i]=1;
  }
  prime[0]=prime[1]=0;
  for(int i=2;i*i<=MAX;i++)
  {
    if(prime[i])
    {
      for(int j=i*i;j<=MAX;j+=i)
      {
        prime[j]=0;
      }
    }
  }
}
int main()
{
  sieve();
  int d,p;
  cin>>d>>p;
  
  bool ok=true;
  int duration=d/p,interval_count,ans=0;
  for(int i=2;i<=duration;i++)
  {
    ok=true;
    int time=i;
      cout<<prime[time]<<" ";
    if(prime[time])
    {
      interval_count=1;
      while(time<=d && interval_count<p)
      {
        time+=duration;
        if(!prime[time])
        {
          ok=false;
          break;
        }
        //cout<<time<<" ";
        if(ok)
          interval_count++;
      }
      //cout<<endl;
      if(interval_count==p)
      {
        ans++;
      }
      
    }
  }
  //cout<<endl;
  cout<<ans<<endl;
  return 0;
}