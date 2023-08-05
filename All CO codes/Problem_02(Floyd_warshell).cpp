#include<bits/stdc++.h>
using namespace std;

void floydWarshall(int matrix[100][100],int m)
{
    int i, j, k;


    for (k = 1; k <=m; k++)
    {

        for (i = 1; i <=m ; i++)
        {

            for (j = 1; j <=m ; j++)
            {
                    int minV=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
                    matrix[i][j]=minV;
            }
        }
    }


}


int main()
{
    int maxi=0,c=0;


   int matrix[100][100];
   // for(int i=0; i<100; i++)
       // matrix[i]= new int [100];



    while(1)
    {


        for(int i=1; i<100; i++)
        {
            for(int j=1; j<100; j++)
            {
                if(i==j)
                    matrix[i][j]=0;
                else
                    matrix[i][j]=999;
            }
        }
        int case_number=0;
        double sum=0.0;
        int count=0;

        while(1)
        {

            int a,b;
            cout<<"Enter edge that are connected"<<endl;
            cin>>a>>b;

            if(a==0 && b==0 && case_number==0)
                return 0;
            else
                case_number++;



           /* if(a>b && a>maxi)
            {
                maxi=a;
            }
            if(b>a && b>maxi)
            {
                maxi=b;
            }
           */
           maxi=max(a,b);
            if(a==0 && b==0)
                break;
            else
            {
                matrix[a][b]=1;
            }
        }

        floydWarshall(matrix,maxi);


        for(int i=1; i<=maxi; i++)
        {
            for(int j=1; j<=maxi; j++)
            {
                if(i!=j && matrix[i][j]!=999)
                {
                     sum=sum+matrix[i][j];
                     count++;

                }
            }
        }

        printf("Case %d: average length between pages= %0.3f clicks\n",c,sum/count);


    }

    return 0;


}

