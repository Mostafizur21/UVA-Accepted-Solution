#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;

int divider(char y[],int a,int b)
{
    int c=0,i;
    for(i=0;i<a;i++)
    {
        c=((y[i]-'0')+c*10)%b;
    }
    if(c==0)
        return 0;
    else
        return 1;
}


int main()
{
    char year[100000];
    long long int i,m,n,p=0;
    while(scanf("%s",&year)!=EOF)
    {
        m=0;
        i=0;
        n=strlen(year);
        if(p)
            cout<<endl;
              p=1;
        if(((divider(year,n,4)==0&&divider(year,n,100)!=0))||divider(year,n,400)==0)
        {
                cout<<"This is leap year.\n";
                m=1;
                i=1;
        }
        if(divider(year,n,15)==0)
        {
            cout<<"This is huluculu festival year.\n";
            i=1;
        }
         if(m==1&&divider(year,n,55)==0)
         {
               cout<<"This is bulukulu festival year.\n";
               i=1;
         }
         if(i==0)
            cout<<"This is an ordinary year.\n";
    }
     return 0;
}

