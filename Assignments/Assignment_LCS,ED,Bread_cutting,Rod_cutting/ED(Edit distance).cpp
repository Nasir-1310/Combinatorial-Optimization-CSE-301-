//ED code in C

#include<bits/stdc++.h>

using namespace std;


int main()
{
    printf("Determining ED(Longest Common Subsequence)\n---------------------------------------------------\n");
    printf("Enter the length of x and y\n");
    int m,n;
    int ch;
    cin>>m>>n;
    m=m+2;
    n=n+2;
    int  a[m][n];
    char  b[m][n];
    char x[m];
    char y[n];
    x[0]='0';
    y[0]='0';
    x[1]='&';
    y[1]='&';
    // char
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            a[i][j]=0;
            b[i][j]='0';
        }
    }
    for(int i=1; i<m; i++)
    {
        a[i][1]=i-1;
        a[1][i]=i-1;


    }

    printf("Enter the alphabet of x\n");
    for(int i=2; i<m; i++)
    {
        cin>>x[i];
    }
    printf("Enter the alphabet of y\n");
    for(int i=2; i<n; i++)
    {

        cin>>y[i];
    }
    cout<<"xi->>";
    for(int i=2; i<m; i++)
        cout<<x[i];
    cout<<endl;
    cout<<"yi->>";
    for(int i=2; i<n; i++)
        cout<<y[i];
    cout<<endl;
    printf("initial a and b array is \n");
    for(int i=1; i<m; i++)
    {
        for(int j=1; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(int i=1; i<m; i++)
    {
        for(int j=1; j<n; j++)
        {
            printf("%c ",b[i][j]);
        }
        printf("\n");
    }

    //calling LCS function
    // LCS(x,y,a,b,m,n);

    for(int i=2; i<=m; i++)
    {
        for(int j=2; j<=n; j++)
        {
            if(x[i]==y[j])
            {
                a[i][j]=a[i-1][j-1];
                b[i][j]='*';
            }

            else
            {
                int p=min(a[i-1][j],   a[i][j-1]);
                int q=min(p,a[i-1][j-1]);
                a[i][j]=1+q;
                if(q==a[i-1][j-1])
                 b[i][j]='*';
               else if(a[i][j-1]==q)
                    b[i][j]='<';
                else
                    b[i][j]='^';


                    }
       }
}



    printf("\n\n");
    for(int i=1; i<m; i++)
    {
        for(int j=1; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(int i=1; i<m; i++)
    {
        for(int j=1; j<n; j++)
        {
            printf("%c ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n ED length is %d\n",a[m-1][n-1]);



    return 0;
}
/*

9 9
intention
execution

*/
