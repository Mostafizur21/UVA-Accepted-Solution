#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int test,day1,day2,month1,month2,year1,year2,i,n,age;
    while(scanf("%d",&test)!=EOF)
    {
        for(i=1;i<=test;i++)
        {
            n=0;
            scanf("%d/%d/%d",&day1,&month1,&year1);
            scanf("%d/%d/%d",&day2,&month2,&year2);
           if(day1<day2)
           {
               day1+=30;
               month2+=1;
           }
           if(month1<month2)
           {
               month1+=12;
               year2+=1;
           }
            age=year1-year2;
            if(age<0)
                printf("Case #%d: Invalid birth date\n",i);
            else if(age>130)
                printf("Case #%d: Check birth date\n",i);
            else
                printf("Case #%d: %d\n",i,age);
        }
    }
    return 0;
}
