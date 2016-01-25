#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#define Max 2000002

int input[Max];

using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int number,i,j,k,m,n,case_number;
    while(scanf("%d",&case_number)!=EOF)
    {
        for(int d=1;d<=case_number;d++)
        {
            cin>>number;
            for(i=0;i<number;i++)
                 cin>>input[i];
            for(j=0;j<number-1;j++)
            {
                for(k=number-1;j<k;k--)
                {
                    if(input[k]<input[k-1])
                    {
                        swap(input[k],input[k-1]);
                    }
                }
            }
            cout<<"Case "<<d<<": "<<input[number-1]<<endl;
        }
    }
    return 0;
}
