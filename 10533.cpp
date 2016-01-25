#include<iostream>
#include<cstdio>
#include<cmath>
#define MAX 1000000

using namespace std;

bool  prime[MAX];
int dpcount[MAX];

int main()
{
    int i,j,k=0,input1,input2,test,p,result,disit,b,c,a;
    for(int i=3; i<=MAX; i+=2)
        prime[i]=true;
    prime[2]=true;
    c=sqrt(MAX);
    for(int i=3; i<=c; i+=2)
    {
        if(prime[i]==true)
            for(int j=i*i; j<=MAX; j+=(2*i))
                prime[j]=false;
    }

    for(a=2; a<=MAX; a++)
    {
        if(prime[a])
        {
            b=a;
            disit=0;
            while(b!=0)
            {
                disit=disit+(b%10);
                b=b/10;
            }
            if(prime[disit])
                dpcount[a]=dpcount[a-1]+1;
            else
                dpcount[a]=dpcount[a-1];
        }
        else
            dpcount[a]=dpcount[a-1];
    }
    scanf("%d",&test);
    {
        for(int d=1; d<=test; d++)
        {
            scanf("%d %d",&input1,&input2);
            if(input1%2!=0||input1==2)
                input1=input1-1;
            result=dpcount[input2]-dpcount[input1];
            printf("%d\n",result);
        }
    }
    return 0;
}
