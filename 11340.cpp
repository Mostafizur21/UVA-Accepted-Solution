#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#define MAX 10010

char input[MAX];

using namespace std;

int main()
{
    int total_number,c,d,e,test,arr[100000];
    double result,sum;
    unsigned char ch[105];
    scanf("%d",&test);
    {
        for(int n=1;n<=test;n++)
        {
            sum=0;
            cin>>total_number;
            getchar();
            for(int i=0;i<total_number;i++)
            {
                cin>>ch[i];
                cin>>arr[i];
            }
            cin>>c;
            getchar();
            for(int j=1;j<=c;j++)
            {
                gets(input);
                for(int k=0;input[k]!='\0';k++)
                {
                    for(int m=0;m<total_number;m++)
                    {
                        if(input[k]==ch[m])
                            sum=sum+arr[m];
                    }
                }
            }
            result=(sum/100.0);
            printf("%.2lf$\n",result);
        }
    }
    return 0;
}
