#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#define MAX 100000000

int division[MAX];

using namespace std;

int main()
{
    long long int number,div,i,j,k,m,n;
    while(scanf("%lld %lld",&number,&div)!=EOF)
    {
        i=0;
        n=0;
        for(;;)
        {
             if(number==0||div==0||number==1||div==1)
            {
                n=1;
                break;
            }
            m=number%div;
            if(m!=0)
            {
                n=1;
                break;
            }
            else
            {
                  division[i++]=number;
                  number=number/div;
                  if(number==1)
                    break;
            }
        }
        division[i]=number;
        if(n==1)
            cout<<"Boring!\n";
        else
        {
            for(j=0;j<=i;j++)
            {
                cout<<division[j];
                if(j<=i-1)
                cout<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
