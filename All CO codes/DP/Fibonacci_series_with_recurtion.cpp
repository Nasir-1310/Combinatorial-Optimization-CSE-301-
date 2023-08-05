//time com O(2^n)
//top down approach
#include<bits/stdc++.h>
using namespace std;
int call=0;
int fibonacci(int n)
{
    call++;
    if(n<=1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);

}
int main()
{

    int F[100];

    printf("Enter a number \n");
    int n;
    cin>>n;
     int nth_num=fibonacci(n);

    printf("The n th Fibonacci number is %d\n",nth_num);
  printf("call is %d\n",call);

    return 0;
}

