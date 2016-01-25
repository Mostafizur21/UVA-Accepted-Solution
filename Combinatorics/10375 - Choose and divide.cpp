#include <bits/stdc++.h>

using namespace std;

int main()
{

    int p,q,r,s;

    while(cin>>p>>q>>r>>s)
    {
        int m,n;

        double result=1.0;

        vector<double>v1,v2,v3,v4;

        m = p-q;

        n = r-s;

        if(q>m)
        {
            for(int i=q+1; i<=p; i++)
                v1.push_back(i);
        }

        else
        {
            for(int i=m+1; i<=p; i++)
                v1.push_back(i);
        }

        m = min(q,m);

        if(s>n)
        {
            for(int i=s+1; i<=r; i++)
                v2.push_back(i);
        }

        else
        {
            for(int i=n+1; i<=r; i++)
                v2.push_back(i);
        }

        n = min(s,n);

        if(n<m)
        {
            for(int i=n+1; i<=m; i++)
                v2.push_back(i);
        }

        if(n>m)
        {
            for(int i=m+1; i<=n; i++)
                v1.push_back(i);
        }

        int a = v1.size();

        int b = v2.size();

        int len = min(a,b);

        for(int i=0; i<len; i++)
        {
            result*=double(v1[i]/v2[i]);
        }

        if(b>a)
        {
            for(int i=len; i<b; i++)
                result*=double(result/double(v2[i]));
        }

        if(a>b)
        {
            for(int i=len; i<a; i++)
                result*=double(result*(double)v1[i]);
        }


        printf("%.5lf\n",result);
    }

    return 0;
}
