#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string>str;

    set<string>::iterator it;

    string st;

    char ch[300000],c[300000];

    int m = 0,len,check;

    while(cin>>ch)
    {

        check = 0;

        len = strlen(ch);

        for(int i=0; i<len; i++)
        {
            if(ch[i]>='A'&&ch[i]<='Z')
                c[m++] = ch[i]+32;

            else if(ch[i]>='a'&&ch[i]<='z')
                c[m++] = ch[i];

            else if(ch[i]=='-'&&ch[i+1]!='\0'&&i+1<=len)
                c[m++] = ch[i];

            else if(ch[i]=='-'&&ch[i+1]=='\0'&&i+1<=len)
            {
                check=1;
                continue;
            }

            else
            {
                c[m]='\0';

                st = c;
                if(m)
                    str.insert(st);

                m=0;
            }

        }

        if(m&&!check)
        {
            c[m]='\0';

            st = c;

            str.insert(st);

            m = 0;
        }

    }


    for(it=str.begin(); it!=str.end(); ++it)
        cout<<*it<<endl;

    return 0;

}

