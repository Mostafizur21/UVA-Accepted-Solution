#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s;

    char c1,c2;

    int a[30],test,n;

    cin>>test;

    while(test--)
    {
        cin>>s;

        cin>>n;

        for(int i=0; i<26; i++)
            a[i] = i;

        while(n--)
        {
            cin>>c1>>c2;

            for(int i=0; i<26; i++)
            {
                if(a[i]==c2-'A')
                    a[i] = c1-'A';
            }

        }

        int len = s.size();

        for(int i=0; i<len; i++)
        {
            if(s[i]!='_')

                s[i] = char(a[s[i]-'A']+'A');

        }

        cout<<s<<endl;


    }

    return 0;
}
