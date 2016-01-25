#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long T,N,sum,track,n;

    cin>>T;

    while(T--)
    {
        cin>>N;

        int j=0,k,temp;

        track = 0;


        while(1)
        {

            j++;

            sum = 0;

            n = N;

            while(n>0)
            {
                k = n%10;

                n=n/10;

                temp = k;

                for(int i=1;i<j;i++)
                {
                    temp*=k;
                }

                sum+=temp;

            }

            if(sum>=N)
                break;

            if(track==sum)
                break;

            track = sum;

        }

        if(sum==N)
            cout<<"Armstrong"<<endl;

        else
            cout<<"Not Armstrong"<<endl;

    }

    return 0;
}
