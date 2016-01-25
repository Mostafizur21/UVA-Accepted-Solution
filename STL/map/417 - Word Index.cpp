#include<bits/stdc++.h>

using namespace std;

int main()
{
    string c,d,e,f,g;

    map<string,int>my_map;

    int i=1;

    for(int a=1; a<=26; a++)
    {
        c=a+96;
        my_map[c] = i++;
    }

    for(int a=1; a<=26; a++)
    {
        for(int b=a+1; b<=26; b++)
        {
            c=a+96;
            d=b+96;
            my_map[c+d] = i++;
        }
    }

    for(int a=1; a<=26; a++)
    {
        for(int b=a+1; b<=26; b++)
        {
            for(int C=b+1; C<=26; C++)
            {
                c = a+96;
                d = b+96;
                e = C+96;
                my_map[c+d+e] = i++;
            }
        }
    }

    for(int a=1; a<=26; a++)
    {
        for(int b=a+1; b<=26; b++)
        {
            for(int C=b+1; C<=26; C++)
            {
                for(int D=C+1; D<=26; D++)
                {
                    c = a+96;
                    d = b+96;
                    e = C+96;
                    f = D+96;
                    my_map[c+d+e+f] = i++;

                }
            }
        }
    }

    for(int a=1; a<=26; a++)
    {
        for(int b=a+1; b<=26; b++)
        {
            for(int C=b+1; C<=26; C++)
            {
                for(int D=C+1; D<=26; D++)
                {
                    for(int E=D+1; E<=26; E++)
                    {
                        c = a+96;
                        d = b+96;
                        e = C+96;
                        f = D+96;
                        g = E+96;
                        my_map[c+d+e+f+g] = i++;
                    }

                }
            }
        }
    }

    string str;
    while(cin>>str)
        cout<<my_map[str]<<endl;
    return 0;
}

