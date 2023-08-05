//ED code in C

#include<bits/stdc++.h>
#include<math.h>
#include<stdlib.h>

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
    for(int i=0; i<m; i++)
    {
        a[i][1]=i;
        a[1][i]=i;
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
                a[i][j]=a[i-1][j-1]+1;
                //b[i][j]='*';
            }

            else
            {
                a[i][j]=min(a[i][j-1],a[i-1][j],a[i-1][j-1]);
                // b[i][j]='<';
               /* if(a[i][j-1]==min(a[i][j-1],a[i-1][j],a[i-1][j-1]))
                    b[i][j]='<';
                else if(a[i-1][j-1]==min(a[i][j-1],a[i-1][j],a[i-1][j-1]))
                    b[i][j]='*';
                else
                    b[i][j]='^';
                    */

            }

        }
    }
/*
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
    char result[n];
    int k=0;
    int i=m-1,j=n-1;


/*
    while(1)
    {
        //  printf("nasir");
        if(x[i]=='&' || y[i]=='&')
            break;
        // printf("i=%d j=%d\n",i,j);
        if(b[i][j]!='*')
        {
            // printf("%c",a[i][j]);
            // result[k]=x[i];
            // k++;
            i--;
            j--;
            //  printf("j-- and i--\n");
        }
        else if (b[i][j]=='<')
        {
            result[k]=x[i];
            k++;
            j--;
            // printf("j--\n");
        }
        else if (b[i][j]=='^')
        {
            result[k]=x[i];
            k++;
            i--;
            //  printf("i--\n");
        }

    }
    printf("\nED  is : ");
    for(int i=k-1; i>=0; i--)
    {
        printf("%c ",result[i]);
    }
    printf("\n\nThank you ^^\n");
    */

    return 0;
}
/*

7 6
A B C B D A B
B D C A B A

*/
