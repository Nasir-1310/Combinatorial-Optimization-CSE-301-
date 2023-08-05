#include<bits/stdc++.h>
using namespace std;

#define MAX 100
#define inf 999

int matrix[MAX][MAX];

void floydWarshall(){
    int n=10;
    for(int k=1;k<=n;k++){

        for(int i=1;i<=n;i++){

            for(int j=1;j<=n;j++){

                if(matrix[i][j]>max(matrix[i][k],matrix[k][j])){

                    matrix[i][j]=max(matrix[i][k],matrix[k][j]);
                }
            }
        }
    }
}

int main()
{
    int case_number=1;

    //bool f = false;

    while(1){
        int c, s, q;
        cin>>c>>s>>q;

        if(c==0 and s==0 and q==0){
            return 0;
        }

       printf("\n");
        int u,v,w;

        // initialize matrix and next arrays
        for(int i=1;i<=MAX;i++){
            for(int j=1;j<=MAX;j++){
                matrix[i][j]=inf;
            }
            matrix[i][i]=0;
        }

        for(int i=0;i<s;i++){
            cin>>u>>v>>w;

            matrix[u][v]=w;
            matrix[v][u]=w;
        }

        floydWarshall();

        printf("Case #%d\n",case_number);

        for(int i=0;i<q;i++){
            cin>>u>>v;
            if(matrix[u][v]==inf){
                printf("no path\n");

            }
            else
            printf("%d\n", matrix[u][v]);
        }
        case_number++;
    }
}
