#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,survivor,paid,x,y;

    bool check;

    while(scanf("%d",&n)!=EOF)
    {
        paid = 0;

        check = false;

        while(1)
        {
            y = log2(n);

            x = pow(2,y);

            survivor = n-x;

            survivor=2*survivor+1;

            if(n>survivor)
            {
                paid+=n-survivor;
                n = survivor;
            }

            else
            {
                paid = paid+2*survivor;
                check = true;
            }

            if(check)
                break;
        }

        printf("%d\n",paid);
    }

    return 0;
}
