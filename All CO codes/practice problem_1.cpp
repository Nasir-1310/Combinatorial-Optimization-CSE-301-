#include<bits/stdc++.h>
using namespace std;
struct account{
             string name;
             int account_num;
             int balance;
             };

account acc[10];
string user_name;
int  acc_num;
int count=0;


void   create_account()
{
    int count=0;

    printf("Enter your name\n");
    //gets(user_name);
   // printf("Your account number is %d\n",count);
    acc[0].name=user_name;
    acc[0].account_num=count;
    acc[0].balance=0;
    count++;
}
void withdraw_money()
{
    printf("Enter Your name\n");
    gets(user_name);
    printf("Enter Your account number\n");
    scanf("%d",&acc_num);
    int found_user=0;
    for(int i=0;i<count ;i++)
    {
        if(acc[i].name==user_name && acc[i].account_num==acc_num)
        {
            printf("Available balance : %d",acc[i].balance);
            printf("Enter amount of money\n");
            int amount ;
            scanf("%d",&amount);
            if(amount>acc[i].balance)
                printf("Insufficient balance\n");
            else
            {
                acc[i].balance=acc[i].balance-amount;
            }
            found_user++;
        }
    }
    if(found_user==0)
    {
        printf("Account is not found! please try again\n");
    }
    found_user=0;
}

void deopsit_money()
{
    printf("Enter Your name\n");
    gets(user_name);
    printf("Enter Your account number\n");
    scanf("%d",&acc_num);
    int found_user=0;
    for(int i=0;i<count ;i++)
    {
        if(acc[i].name==user_name && acc[i].account_num==acc_num)
        {
            printf("Available balance : %d",acc[i].balance);
            printf("Enter amount of money\n");
            int amount ;
            scanf("%d",&amount);


                acc[i].balance=acc[i].balance+amount;

            found_user++;
        }
    }
    if(found_user==0)
    {
        printf("Account is not found! please try again\n");
    }
    found_user=0;

}

void check_current_balance()
{
    printf("Enter Your name\n");
    gets(user_name);
    printf("Enter Your account number\n");
    scanf("%d",&acc_num);
    int found_user=0;
    for(int i=0;i<count ;i++)
    {
        if(acc[i].name==user_name && acc[i].account_num==acc_num)
        {
            printf("Available balance : %d",acc[i].balance);

            found_user++;
        }
    }
    if(found_user==0)
    {
        printf("Account is not found! please try again\n");
    }
    found_user=0;
}
int main()
{
    int option=1;
    while(option){
    printf("Choose an option that you want to perform\n");
    printf("1)Create account\n2)Withdraw Money\n3) Deposit Money\n4) Check current balance\n0)Exit");
    scanf("%d",&option);
    if(option==1)
    {
        create_account();
    }
    else if(option==2)
    {
       withdraw_money();
    }
    else if(option==3)
    {
        deposit_money();
    }
    else if(option==4)
    {
        check_currnet balance();
    }
    else if(option==0)
        return 0;
}
    return 0;
}
