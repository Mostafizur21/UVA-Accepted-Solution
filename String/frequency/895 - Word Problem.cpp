#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1000][26],ar[26];

    string s,str[1000],st;

    int i=0;

    memset(arr,0,sizeof(arr));

    while(cin>>s)
    {
        if(s=="#")
            break;

        str[i] = s;

        int len = s.size();

        for(int j=0; j<len; j++)
        {
            arr[i][s[j]-97]++;
        }

        i++;
    }

    cin.ignore();

    while(getline(cin,st))
    {
        if(st=="#")
            break;

        int ln = st.size();

        memset(ar,0,sizeof(ar));

        for(int j=0; j<ln; j++)
        {
            if(st[j]>='a'&&st[j]<='z')
            {
                ar[st[j]-97]++;
            }
        }

        int result = 0;

        for(int j=0; j<i; j++)
        {
            s = str[j];

            int len = s.size();

            int k;

            for(k=0; k<len; k++)
            {
                if(arr[j][s[k]-97]<=ar[s[k]-97])

                    continue;

                else

                    break;
            }

            if(k==len)

                result++;

        }

        cout<<result<<endl;

    }

    return 0;

}
