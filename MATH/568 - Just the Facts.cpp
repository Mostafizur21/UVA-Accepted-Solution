#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v;

    v.push_back(1);

    int n=1;//factorial of 0

    for(int i=1;i<=10000;i++)
    {
        int m = i*n;

        int x,a,b,c,d;

        while(m>=1)
        {
            if(m%10!=0)
            {
                x = m%10;

                m/=10;

                a = m%10;

                m/=10;

                b = m%10;

                m/=10;

                c = m%10;

                m/=10;

                d = m%10;

                break;
            }

            m/=10;
        }

        v.push_back(x);

        n = (d*10000)+(c*1000)+(b*100)+(a*10)+x;

    }

    int input;

    while(cin>>input)
    {
        printf("%5d -> %d\n",input,v[input]);

    }

    return 0;
}
