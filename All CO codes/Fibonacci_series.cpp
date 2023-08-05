//Time com O(n)
//buttom up approach

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int F[100];
    F[0]=0;F[1]=1;
    printf("Enter a number \n");
    int n;
    cin>>n;

    for(int i=2;i<n+1;i++)
    {
        if(n<=1)
            return n;
        else {
            F[i]=F[i-1]+F[i-2];
        }
    }
    printf("The n th Fibonacci number is %d\n",F[n-1]);
     printf("The Fibonacci series is \n");
     for (int j=0;j<=n-1;j++)
     {
         printf("%d ",F[j]);

     }
    return 0;
}
