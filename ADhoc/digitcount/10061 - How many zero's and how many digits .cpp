#include<bits/stdc++.h>

using namespace std;

double digit[1<<20];

int main()
{
    int N,base,highest_factor,power_of_highest_factor,n,total_digit,zero;

    digit[0] = 0;

    for(int i=1; i<=(1<<20); i++)
    {
        digit[i] = digit[i-1]+log(i);
    }

    while(cin>>N>>base)
    {
        power_of_highest_factor=0;

        zero=0;

        n = base;

        while(n%2==0)
        {
            highest_factor = 2;
            n/=2;
            power_of_highest_factor++;
        }

        for(int i=3; i*i<=n; i+=2)
        {
            if(n%i==0)
            {
                power_of_highest_factor=0;
                while(n%i==0)
                {
                    n/=i;
                    highest_factor=i;
                    power_of_highest_factor++;
                }
            }
        }


        if(n!=1)
        {
            highest_factor=n;
            power_of_highest_factor = 1;
        }


        for(int i=highest_factor; i<=N; i*=highest_factor)
        {
            zero+=(N/i);
        }

        zero = zero/power_of_highest_factor;

        total_digit = int(digit[N]/log(base)+1);

        cout<<zero<<" "<<total_digit<<endl;
    }

    return 0;
}
