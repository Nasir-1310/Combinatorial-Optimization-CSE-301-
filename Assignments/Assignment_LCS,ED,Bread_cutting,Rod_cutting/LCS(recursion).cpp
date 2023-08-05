
#include <bits/stdc++.h>
using namespace std;



/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( char *X, char *Y, int m, int n )
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m-1] == Y[n-1])
        return 1 + lcs(X, Y, m-1, n-1);
    else
        return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}



int main()
{
    //char X[] = "AGGTAB";
   // char Y[] = "GXTXAYB";
   char x[20],y[20];
   cin>>x>>y;

    int m = strlen(x);
    int n = strlen(y);
     int length=lcs(x,y,m,n);
    cout<<"Length of LCS is "<< length;

    return 0;
}

/*
ABCBDAB
BDCABA
*/
