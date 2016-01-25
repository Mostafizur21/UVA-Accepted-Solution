#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,str[105];

    int test,n,m,arr[105],check=0;

    cin>>test;

    while(test--)
    {
        if(check)
            cout<<endl;

        cin>>n>>m;

        for(int k=1; k<=m; k++)
        {
            cin>>s;

            str[k-1] = s;

            int cont=0;

            for(int i=0; i<n-1; i++)
            {

                for(int j=n-1; i<j; j--)
                {

                    if(s[j]<s[j-1])
                    {

                        cont++;

                        char temp = s[j];

                        s[j] = s[j-1];

                        s[j-1] = temp;

                    }

                }

            }

            arr[k-1] = cont;

        }

        for(int i=0; i<m-1; i++)
        {

            for(int j=m-1; i<j; j--)
            {

                if(arr[j]<arr[j-1])
                {

                    int tmp = arr[j];

                    arr[j] = arr[j-1];

                    arr[j-1] = tmp;

                    string temp = str[j];

                    str[j] = str[j-1];

                    str[j-1] = temp;

                }

            }

        }

        for(int i=0;i<m;i++)
            cout<<str[i]<<endl;

        check = 1;

    }

    return 0;

}
