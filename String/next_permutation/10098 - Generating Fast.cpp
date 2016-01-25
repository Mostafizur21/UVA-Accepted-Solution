#include <bits/stdc++.h>
using namespace std;

vector<char>ch;

void print()
{
    for(int i=0;i<ch.size();i++)
        cout<<ch[i];

    cout<<endl;

}

int main()
{
    int test;

    char c[12];

    cin>>test;

    while(test--)
    {
        ch.clear();

        cin>>c;

        for(int i=0;c[i]!='\0';i++)

            ch.push_back(c[i]);

        sort(ch.begin(),ch.end());

        print();

        while(next_permutation(ch.begin(),ch.end()))
        {
            print();
        }

        //if(test)
            cout<<endl;

    }

    return 0;

}
