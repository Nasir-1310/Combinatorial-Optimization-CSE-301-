#include<bits/stdc++.h>
#define maxl 100
int mat[maxl][maxl];
using namespace std;

void print_list(int profit[],int length[],int len)
{
    printf("Length Li : ");
    for(int i=0; i<=len; i++)
    {
        printf("%d ",length[i]);
    }
    printf("\nProfit pi : ");
    for(int i=0; i<=len; i++)
    {
        cout<<profit[i]<<" ";
    }
    int n=len,m=len+1;
    printf("\nMatrix is :\n");
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            printf("%d ",mat[i][j]);
        }
        cout<<endl;
    }

}
int main()
{
    int length[maxl],profit[maxl];

    printf("Enter maximum length\n");
    int len;
    cin>>len;
    for(int i=0; i<=len; i++)
    {
        length[i]=0;
        profit[i]=0;
    }

    printf("Enter the lengths and profit\n");
    for(int i=1; i<=len; i++)
    {
        cin>>length[i];
        cin>>profit[i];
    }
    int n=len;
    int m=n+1;

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<m; j++)
        {
            mat[i][j]=0;
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i>j)
            {
                mat[i][j]=mat[i-1][j];
            }
            else
            {
                int y=(profit[i]+mat[i][j-i]);

                mat[i][j]=max(mat[i-1][j],y);
            }

        }
    }
    print_list(profit,length,len);

    printf("\nMaximum profit : ");
    cout<<mat[n][m]<<endl;
    int i=n,j=m;
    int result[len];
    int k=0;
    while(i!=0 && j!=0 && mat[i][j]!=0)
    {
        if(mat[i][j]==mat[i-1][j])
        {
            i--;
        }
        else
        {
            result[k]=i;
            k++;
            j=j-i;
        }
    }
    printf("\nAccepted length is : ");
    for(int i=k-1; i>=0; i--)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}
/*
4
1 2
2 3
3 6
4 9
*/
