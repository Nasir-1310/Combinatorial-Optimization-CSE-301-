#include<stdio.h>
char arr[10];
char s[1000];
int main()
{

    printf("Enter the number of states\n");
    int n,count=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        getchar();
        printf("arr[%d]=",i);
        scanf("%c",&arr[i]);
        printf("\n");
    }
    char final='a';
    printf("Enter a String\n");
    scanf("%s",s);
// printf("%c\n",final);
    for(int j=0; s[j]; j++)
    {
        //  printf("%c\n",final);

        switch(final)
        {
        case'a':  if(s[j]=='0') {
                final=arr[0];
            printf("(a,{0,1})=a\n");
            count=0;
        }
        else if(s[j]=='1')
        {
            final=arr[0];
            count++;
            printf("(a,{0,1})=a\n");
            if(count==3)
            {
                final=arr[3];
            }

        }
        break;
    case'b':  if(s[j]=='1')
    {
        final=arr[2];
        printf("(b,1)=c\n");
    }
    break;

case'c':  if(s[j]=='1') { final=arr[3];
    printf("(c,1)=d\n");
    }
    break;
case'd':   if(s[j]=='0') {
        final=arr[3];
    printf("(d,{0,1})=d\n");
}
else if(s[j]=='1')
{
    final=arr[3];
    printf("(d,{0,1})=d\n");
}
break;



}

}
if(final=='d')
    printf("String is Accepted\n");
else
    printf("String is not Accepted\n");


}

