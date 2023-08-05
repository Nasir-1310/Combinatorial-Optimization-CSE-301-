#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, i, j;
    cout<<"Enter number of location:\n";
    cin>>n;

    cout<<"Enter distance : ";
    int d[n][n];
    for(i=0; i<n; ++i){
        for(j=0; j<n; ++j){
            cin>>d[i][j];
        }
    }

    int start, finish, mi;
    cout<<"Enter starting and finishing location: ";
    cin>>start>>finish;

    int now = start-1, distance = 0, out = 0;
    vector<int> path;

    while(1){
        path.push_back(now+1);
        i = now;
        mi = 1000000;
        for(j=0; j<n; ++j){
            if(d[i][j]!=0 && d[i][j]<mi)
            {
                now = j, mi = d[i][j];
                if(j == finish-1)
                    out = 1;
                d[i][j]=0, d[j][i]=0;
            }
        }

        distance += mi;
        if(out)
            break;
    }

    path.push_back(finish);

    cout<<"distance: "<<distance<<endl;
    cout<<"Path flow: ";
    for(i=0; i<path.size(); ++i)
    {
        cout<<path[i];
        if(i == path.size()-1)
            break;
        cout<<" -> ";
    }

    return 0;
}

