#include <bits/stdc++.h>
using namespace std;

vector<int>v;

int M,x,y,check;

void binarysearch()
{
    x = v[0];

    v.erase(v.begin());

    y = M-x;

    if(y==0 || v.size()==0|| (x+v[0])>M)
    {
        check = 1;
        y=0;
    }

    else
    {
            int low=0;

            int high=v.size()-1;

            while(low<high)
            {
                int mid=(low+high)/2;

                if(v[mid]<y)
                    low=mid+1;

                else
                    high=mid;
            }

            if(y==v[low])
            {
                y=v[low];

                v.erase(v.begin()+low);
            }

            else
            {
                y=0;
//                if(x+v[low]>M)
//                    check = 1;
            }

    }
}

int main()
{
    int N,i,j,k,m,difference;

    while(cin>>N)
    {

        check = 0;

        difference = 1000001;

        v.clear();

        for(k=1; k<=N; k++)
        {
            cin>>m;
            v.push_back(m);
        }

        cin>>M;

        sort(v.begin(),v.end());

        while(v.size())
        {
            binarysearch();

            if(y && difference>(y-x))
            {
                i = x;
                j = y;
                difference = y-x;
            }

            if(check)
                break;
        }
        cout<<"Peter should buy books whose prices are "<<i<<" and "<<j<<"."<<endl<<endl;
    }

    return 0;
}
