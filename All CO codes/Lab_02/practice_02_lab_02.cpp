#include<bits/stdc++.h>
using namespace std;
int find_cities(char cities[],int n,char c)
{
    for(int i=0;i<n;i++)
    {
        if(c==cities[i])
            return i;
    }
    return -1;
}
int main()
{
    printf("Enter number of vertex or cities\n");
    int n;
    cin>>n;

    char cities[n];
    printf("Enter the cities\n");
    for(int i=0;i<n;i++)
    {
        cin>>cities[i];
    }
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mat[i][j]=99999;
        }
    }

    printf("Cities are : ");
    for(int i=0;i<n;i++)
    {
        printf("%c ",cities[i]);
    }
    printf("\n\n");
    printf("Matrix is :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        printf("\n");
    }
    printf("Enter the number of edges\n");
    int edges;
   cin>>edges;
   for(int i=0;i<edges;i++)
   {
       char a,b;
       int v;
       cin>>a>>b>>v;
       mat[a-'A'][b-'A']=v;
       mat[b-'A'][a-'A']=v;
   }
    printf("Matrix is :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        printf("\n");
    }
    printf("Enter start cities\n");
    char c,d;
    int start,finish;
    cin>>c;
    start=find_cities(cities,n,c);

    printf("Enter Destination city\n");

    cin>>d;
    finish=find_cities(cities,n,d);
    int visited[n][n];
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<n;j++)
        {
            visited[i][j]=0;
        }
    }
    cout<<start<<" "<<finish<<endl;
    int current,temp;
    current=start;

     cout<<char('A'+start)<<" ";
     int cost=0;
    while(current!=finish)
    {

        temp=99999;
    int min = 99999;
            for(int i=0;i<n;i++)
            {
                if(mat[current][i]<temp)
                {
                    temp=mat[current][i];
                    min=i;
                }
            }
          //  cost+=min;

            if(temp==99999)
            {
                printf("No path found\n");
                break;
            }
        else if (visited[current][min]==0)
        {
            cout<<char('A'+min)<<" ";
            visited[current][min]=visited[min][current]=1;
            current=min;

        }
        else{
            mat[current][min]=mat[min][current]=99999;
        }

    }
//printf("Total cost : %d",cost);

    return 0;

}
/*
8
A B C D E F G H
10

A B 15
A H 10
A G 25
B C 11
H D 20
C D 27
G F 13
F E 19
H E 2
E D 7
A
D
*/

