#include<bits/stdc++.h>
using namespace std;
struct activities{
           string description;
           int starting_time;
           int finishing_time;
           };
    bool comp(activities i,activities j){
        return (i.finishing_time<j.finishing_time);
    }

int main()
{
   int  count=0;
    int num_of_activities;
    printf("Enter number of activities\n");
    scanf("%d",&num_of_activities);

    vector<activities>activity;
    activities temp;
    printf("Enter activities details\n>>Activity name\n>>Starting time\n>>Finishing time\n");
    for(int i=0;i<num_of_activities;i++)
    {
        /*scanf("%s",&activity[i].description);
        scanf("%d",&activities[i].starting_time);
        scanf("%d",&activities[i].finishing_time);*/
       cin>>temp.description>>temp.starting_time>>temp.finishing_time;

       // getline(cin,temp.description);
       // getchar();
      //  cin>>temp.starting_time>>temp.finishing_time;

        activity.push_back(temp);
    }
    printf("\n\n");

    sort(activity.begin(),activity.end(),comp);

     cout<<"Description : "<<activity[0].description<<endl<<"starting_time : "<<activity[0].starting_time<<endl<<"finishing_time : "<<activity[0].finishing_time<<endl;
     printf("\n\n");
     for(int i=1;i<num_of_activities;i++)
     {
         if(activity[i].starting_time>=activity[i-1].finishing_time)
         {
                  cout<<"Description : "<<activity[i].description<<endl<<"starting_time : "<<activity[i].starting_time<<endl<<"finishing_time : "<<activity[i].finishing_time<<endl;
                       count++;
                       printf("\n\n");
         }
     }
     printf("\nTotal number of work %d\n",count+1);


return 0;

}
