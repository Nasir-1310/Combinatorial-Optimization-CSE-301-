#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Nnode,Nedge;
    printf("Enter number of edges\n");
    cin>>Nedge;
    printf("Enter number of vertex\n");
    int Nvertex;
    cin>>Nvertex;


    char startN[Nedge],finishN[Nedge];
    int check_start[Nedge],check_finish[Nedge];
    int weight[Nedge];
    pair<char , int>check[Nvertex];

    printf("Enter the vertexs\n");
    for(int i=0;i<Nvertex;i++)
    {
        cin>>check[i].first;
        check[i].second=0;
    }
    printf("Enter vertex connected to edges and corresponding weight\n");
    for(int i=0;i<Nedge;i++)
    {
        cin>>startN[i]>>finishN[i]>>weight[i];

    }
    printf("Edge and corresponding weight\n");
    for(int i=0;i<Nedge;i++)
    {
        cout<<startN[i]<<"<---->"<<finishN[i]<<"  "<<weight[i]<<endl;
    }

     int temp;
     char ctemp;
     int i,j;
     for(i=0;i<Nedge;i++)
    {
        for(j=i+1;j<Nedge;j++){
            if(weight[j]<weight[i])
            {
                temp=weight[i];
                weight[i]=weight[j];
                weight[j]=temp;

                ctemp=startN[i];
                startN[i]=startN[j];
                startN[j]=ctemp;

                ctemp=finishN[i];
                finishN[i]=finishN[j];
                finishN[j]=ctemp;

            }
        }
    }

    printf("Sorted Edge and corresponding weight\n");
    for(int i=0;i<Nedge;i++)
    {
        cout<<startN[i]<<"<---->"<<finishN[i]<<"  "<<weight[i]<<endl;
    }


    printf("Initial vertex is \n");
    for(int i=0;i<Nvertex;i++)
    {
        cout<<check[i].first<<"  " <<check[i].second<<endl;
    }
    int cost=0,a,b;
    int first=0,second=0;

    for(int i=0;i<Nedge;i++)
    {
        for(int j=0;j<Nvertex;j++)
        {
             if(startN[i]==check[j].first)
             {

               /*  if(check[j].second==0)
                        {
                     first=1;
                     a=j;

                         }
                 */
             }
             if(finishN[i]==check[j].first)
             {
                 if(check[j].second==0)
                 {
                     second=1;
                     b=j;

                 }
             }

             if(first==1 || second==1)
             {
                 cost+=weight[i];
                 printf("Taken =%d\n",weight[i]);
                 check[a].second=1;
                 check[b].second=1;
             }
             first=0;second=0;

    }

for(int i=0;i<Nvertex;i++)
    {
        cout<<check[i].first<<"  " <<check[i].second<<endl;
    }
    cout<<"------------------------------"<<endl;


    }



    printf("Total cost is %d\n",cost);

    return 0;

}

/*
14
9
a b c d e f g h i
a b 4
a h 8
b h 11
h i 7
i c 2
i g 6
h g 1
b c 8
c f 4
g f 2
f d 14
c d 7
d e 9
f e 10

*/
