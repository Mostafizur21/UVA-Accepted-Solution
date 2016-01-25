#include <bits/stdc++.h>
#define MAX 100000+5

using namespace std;

bool  prime[MAX];

void seive()
{
    for(int i=3; i<=MAX; i+=2)
        prime[i]=true;

    prime[2]=true;

    prime[1] = false;

    prime[0] = false;

    int k=sqrt(MAX);

    for(int i=3; i<=k; i+=2)
    {
        if(prime[i]==true)

            for(int j=i*i; j<=MAX; j+=(2*i))
                prime[j]=false;
    }

}

int main()
{
    seive();

    char ch[260],c[10];

    int result,in,m;

    while(cin>>ch)
    {
        result = 0;

        if(ch[0]=='0'&&ch[1]=='\0')
            break;

        for(int i=0; ch[i]!='\0'; i++)
        {
            in = 0;

            for(int j=i; j<(i+5)&&j<ch[j]!='\0'; j++)
            {
                c[in++] = ch[j];
                c[in] = '\0';

                m = atoi(c);

                if(prime[m])
                {
                    if(result<m)
                    {
                        result = m;
                    }
                }
            }
        }

        cout<<result<<endl;
    }

    return 0;
}
