//ED code in C

#include<bits/stdc++.h>

using namespace std;


int main()
{
    printf(" Runa guess word using ED(Longest Common Subsequence)\n---------------------------------------------------\n");
   // printf("Enter the length of x and y\n");
    int m,n;
    int ch;
     char x[100];
     cin>>x;
    char y[6][16]={"abaculi","abacus","abacuses","abide","abduct","abbreviation"};



    int  a[100][100];


cout<<"Yes"<<endl;
    // char
    for(int i=0;i<=15;i++)
    {
        for(int j=0;j<=15;j++)
        {
            a[i][j]=0;

        }
    }
    for(int i=1; i<15; i++)
    {
        a[i][1]=i-1;
        a[1][i]=i-1;


    }



    cout<<endl;
    printf("initial a  array is \n");
    for(int i=1; i<15; i++)
    {
        for(int j=1; j<15; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    m=strlen(x)-1;


    int k=1;
    string ans="aaaaaa";

    int minval=99999;
    int p=0;
while(k<=6){
     n=strlen(y[k-1])-1;
    for(int i=2; i<=m; i++)
    {
        for(int j=2; j<=n; j++)
        {

            if(x[i-2]==y[i-2][j-2])
            {
                a[i][j]=a[i-1][j-1];

            }

            else
            {
                int p=min(a[i-1][j],   a[i][j-1]);
                int q=min(p,a[i-1][j-1]);
                a[i][j]=1+q;

                    }
       }
}
if(minval>a[m-1][n-1])
{
    minval=a[m-1][n-1];
     ans=y[k-1];
     //strcpy(ans,y[k-1]);
     p=k-1;
}
//printf("%d th string's edit distance is %d\n",k+1,a[m-1][strlen(k-1)-1]);
cout<<k+1<<" "<<a[m-1][n-1];
k++;

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
   n=ans.size();
    printf("\n ED length is %d\n",a[m-1][n-1]);
    cout<<"string is   :"<<ans<<endl;



    return 0;
}
/*

9 9
intention
execution

*/
