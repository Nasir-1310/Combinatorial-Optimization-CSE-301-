#include<bits/stdc++.h>
using namespace std;

int n,l;
int c[1000],cut[1000][1000];
int dp(int start,int finish)
{
   // cerr << start << " " << finish << " " << cut[start][finish] << endl;

    if(cut[start][finish]!=-1)
        return cut[start][finish];

    //cerr << start << " " << finish << endl;
        // printf("in function\n");
     int ans=99999;
     int p=0;
     for(int i=1;i<=n;i++)
      {
        if(c[i]<=start or c[i]>=finish )
        {

        }
      else {
            p=1;
            ans=min(ans,finish-start+dp(start,c[i])+dp(c[i],finish));
                      printf("start=%d    c[i]=%d c[i]=%d  finish=%d\n",start ,c[i],c[i],finish);
                      printf("cost is :%d\n",ans);
        }

      }
      if(p==0)
        cut[start][finish]=0;

      else{
            cut[start][finish]=ans;
      }

        return cut[start][finish];
      }


int main()
{
  //int n,l;
  cin>>l;
  cin>>n;

  for(int i=1;i<=n;i++)
    {
      c[i]=0;
    }

  for(int i=0;i<1000;i++)
  {
     for(int j=0;j<1000;j++)
    {
        cut[i][j]=-1;
    }
  }
  for(int i=1;i<=n;i++)
    {
       cin>>c[i];
    }

  long long  int result=dp(0,l);
  printf("Minimum cost is %lld",result);




return 0;
}

/*

10
3
2 4 7

*/
