//time com O(2^n)

#include<bits/stdc++.h>
using namespace std;
 int F[100];
 int call=0;
int fibonacci(int n)
{
    call++;
    if(F[n]>=0)
        return F[n];

    if(n<=1)
       F[n]=n;
    else
       F[n]= fibonacci(n-1)+fibonacci(n-2);
    return F[n];


}
int main()
{



    printf("Enter a number \n");
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
        F[i]=-1;
     int nth_num=fibonacci(n);

    printf("The n th Fibonacci number is %d\n",nth_num);
    printf("call is %d\n",call);

    return 0;
}


