#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;

int gcd(int a, int b)
{
    return (b == 0 ? a : gcd(b, a % b));
}

int main()
{
    long long int N,arr[100],i,j,k,m,n,maxgcd,p,q;
    string s;
    char ch[100000];
    scanf("%lld",&N);
    getchar();
    for(i=1; i<=N; i++)
    {
        getline(cin,s);
        k=0;
        m=0;
        maxgcd=0;
        for(j=0; j<s.size(); j++)
        {
            if(s[j]!=' ')
            {
                ch[k++]=s[j];
            }
            if(s[j]==' ')
            {
                ch[k]='\0';
                arr[m++]=atoi(ch);
                k=0;
            }
        }
        if(k!=0)
        {
            ch[k]='\0';
            arr[m++]=atoi(ch);
        }
        for(n=0; n<m; ++n)
        {
            for(p=n+1; p<m; ++p)
            {
                q=gcd(arr[n],arr[p]);
                if(q>maxgcd)
                {
                    maxgcd=q;
                }
            }
        }
        printf("%lld\n",maxgcd);
    }
    return 0;
}
