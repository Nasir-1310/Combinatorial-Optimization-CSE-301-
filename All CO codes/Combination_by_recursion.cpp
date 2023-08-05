#include<bits/stdc++.h>
using namespace std;
int Combination(int n,int r)
{
    if(n<=0|| r<0)
    {
        printf("Invalid input\n");
        return 0;
    }
    if(r==n || r==0)
    return 1;
    if (r==1)
        return n;
    else
       return Combination(n-1,r-1)+Combination(n-1,r);

}
int main()
{
    printf("Combination calculation of nCr\n-----------------------------------------------------------------------------\n");
    printf("Enter the value of n and r\n");
    int n,r;
    cin>>n>>r;
    int result=Combination(n,r);
    printf("Combination of nCr is : %d",result);
    return 0;

}
