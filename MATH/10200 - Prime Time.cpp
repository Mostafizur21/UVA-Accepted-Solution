#include<bits/stdc++.h>
#define MAX 10001

using namespace std;

bool  prime[MAX];

vector<int>v;

void seive()
{
    for(int i=3; i<=MAX; i+=2)
        prime[i]=true;

    prime[2]=true;

    int c=sqrt(MAX);

    for(int i=3; i<=c; i+=2)
    {
        if(prime[i]==true)
        {

            for(int j=i*i; j<=MAX; j+=(2*i))
                prime[j]=false;
        }
    }

    for(int i=2; i<=MAX; i++)
    {
        if(prime[i])
            v.push_back(i);
    }
}

bool isprime(long long n)
{
    int len = v.size();

    for(int i=0; i<len; i++)
        if(n%v[i]==0)
            return false;

    return true;
}

int main()
{
    int m,n,p,a,b,primecount[10005],c;

    long long q;

    double f;

    seive();

    primecount[0] = 1;

    for(p=1; p<=10000; p++)
    {
        q=((p*p)+p+41);

        if(q<=MAX)
        {
            if(prime[q])
                primecount[p]=primecount[p-1]+1;

            else
                primecount[p]=primecount[p-1];
        }

        else
        {
            if(isprime(q))
                primecount[p]=primecount[p-1]+1;

            else
                primecount[p]=primecount[p-1];
        }

    }

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        a=n-m+1;

        if(m==0)
            b=primecount[n]-primecount[m]+1;

        else
            b=primecount[n]-primecount[m-1];

        f=(float)b/a*100;

        printf("%0.2lf\n",f+1e-8);

    }

    return 0;

}
