#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>mp;

    int N,i;

    string s,password;

    char str[1000000];

    while(scanf("%d",&N)!=EOF)
    {
        scanf("%s",str);

        int check=0;

        for(i=0; str[i+N-1]!='\0'; i++)
        {
            s="";

            for(int j=i; j<i+N; j++)
                s+=str[j];

            mp[s]++;

            if(check<mp[s])
            {
                check = mp[s];

                password = s;
            }

        }

        cout<<password<<endl;

        mp.clear();

    }

    return 0;

}
