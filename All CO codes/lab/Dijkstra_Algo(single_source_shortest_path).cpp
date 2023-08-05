#include<bits/stdc++.h>
using namespace std;
int ne=1,u,v,vertex1,vertex2,Nvertex,Nedge,a,b,s;
int weight[10],Graph[10][10];

void print_shortest_path()
{
    char ch;
    for(int i=1;i<=Nvertex;i++)
    {
        ch=64+i;
        cout<<ch<<"\t\t"<<weight[i]<<endl;

    }
}
int check_min_edge(int weight[],bool check_visited[])
{
    int min_val=999,index;
    for(int i=1;i<=Nvertex;i++)
    {
        if(check_visited[i]==false && weight[i]<min_val)
             {
                 min_val=weight[i];
                 index=i;
             }

    }
    return index;
}
void Dijkstra_Algo(int Graph[10][10],int source)
{
    bool check_visited[Nvertex];

    for(int i=0;i<=Nvertex;i++)
        check_visited[i]=false;

    weight[source]=0;
    for(int i=1;i<=Nvertex;i++)
    {

    int m=check_min_edge(weight,check_visited);
    check_visited[m]=true;
    for(int j=1;j<=Nvertex;j++)
    {
        if(Graph[m][j]!=999 && check_visited[j]==false)
        {
            if(weight[j]>(weight[m]+Graph[m][j]))
                weight[j]=(weight[m]+Graph[m][j]);
        }
      }

    }

}

int main()
{

    printf("Enter number of Vertices\n");
    scanf("%d",&Nvertex);
    printf("Enter number of Edge\n");
    int Nedge;
    cin>>Nedge;

    for(int i=1;i<=Nvertex;i++)
    {
        for(int j=1;j<=Nvertex;j++)
        {
            Graph[i][j]=999;

        }
        weight[i]=999;
    }
    printf("Enter vertices and corresponding weight\n");
    while(Nedge--)
    {
         cin>>vertex1>>vertex2;
         cin>>Graph[vertex1][vertex2];
        // Graph[vertex2][vertex1]=Graph[vertex1][vertex2];

    }

    printf("The given Graph is \n");
    for(int i=1;i<=Nvertex;i++)
    {
        for(int j=1;j<=Nvertex;j++)
        {
            printf("%d\t",Graph[i][j]);
        }
        printf("\n");
    }


  Dijkstra_Algo(Graph,1);

printf("\n\nVertex\tDistance from source vertex\n");
print_shortest_path();


}
/*
5
7
1 2 10
3 2 3
1 3 5
2 4 1
3 4 9
3 5 2
5 4 6

*/


