#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,L,W,H,check,volume;

    while(cin>>T && T)
    {
        check = 0;

        volume = 0;

        while(T--)
        {
            cin>>L>>W>>H;

            if(H>check)
            {
                check = H;
                volume = L*W*H;
            }

            else if(H==check)
            {
                if(volume<L*W*H)
                    volume = L*W*H;
            }
        }

        cout<<volume<<endl;

    }

    return 0;
}
