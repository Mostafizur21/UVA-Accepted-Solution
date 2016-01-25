#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string>str;

    set<string>::iterator it;

    string st;

    char ch[300],c[300];

    while(cin>>ch)
    {
        int m=0;

        for(int i=0; ch[i]!='\0'; i++)
        {
            if(ch[i]>='A'&&ch[i]<='Z')
                c[m++] = ch[i]+32;

            else if(ch[i]>='a'&&ch[i]<='z')
                c[m++] = ch[i];

            else
            {
                c[m]='\0';

                st = c;
                if(m)
                str.insert(st);

                m=0;
            }

        }

        if(m)
        {
            c[m]='\0';

            st = c;

            str.insert(st);
        }

    }

    for(it=str.begin(); it!=str.end(); ++it)
        cout<<*it<<endl;

    return 0;

}
