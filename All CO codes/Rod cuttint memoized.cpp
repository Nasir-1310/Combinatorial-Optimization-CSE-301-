#include<bits/stdc++.h>
using namespace std;
int memoized_cut_rod_aux(int p[],int n,int r[]);

int memoized_cut_rod(int p[],int n)
{
    int r[n];
    for(int i=0;i<=n;i++)
        r[i]=-99999;
    return memoized_cut_rod_aux(p,n,r);
}

int memoized_cut_rod_aux(int p[],int n,int r[])
{
    int q;
    if(r[n]>=0)
        return r[n];
    if(n==0)
          q=0;
    else q=-99999;
    for(int i=1;i<=n;i++)
    {
        q=max(q,p[i]+memoized_cut_rod_aux(p[i],n-i,r));
    }
    r[n]=q;
    return q;
}


int main()
{
   // printf()
   int n;
   cin>>n;


   int p[n];
   print("Enter the prices\n");
   for(int i=0;i<=n;i++)
   {
       cin>>p[i];
   }
   int result=memoized_cut_rod(p,n);
   printf("Price is %d",result);


   return 0;
}
