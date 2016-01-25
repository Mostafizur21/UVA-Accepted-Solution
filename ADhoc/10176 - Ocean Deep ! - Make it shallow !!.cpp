#include<bits/stdc++.h>

using namespace std;

int main()
{
    char binary[10001],ch[10001];

    int i,j,len,decimal,in=0,check;

    while(cin>>binary)
    {
        check = 0;

        for(int i=0;binary[i]!='\0';i++)
        {
            if(binary[i]=='#')
            {
                check = 1;
            }

            else
            {
                ch[in++] = binary[i];
            }
        }

        if(!check)
            continue;

        ch[in] = '\0';

        j=0;

        decimal=0;

        int len = strlen(ch);

        for(i=len-1; i>=0; i--)
        {
            decimal*=2;

            decimal+=ch[i]-'0';

            decimal%=131071;
        }

        if(decimal==0)
            printf("YES\n");

        else
            printf("NO\n");

        in =0;

    }

    return 0;
}

