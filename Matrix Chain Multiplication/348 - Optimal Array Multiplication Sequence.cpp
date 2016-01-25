#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#define infinity 10000000000

using namespace std;

vector<char>ch;

long long p[100],n,m[100][100],s[100][100];


void Print_Optimal_Parens(int i,int j)
{
    if(i==j)
    {
        ch.push_back('A');

        if(i<10)
            ch.push_back(i+48);

        else
        {
            ch.push_back(49);
            ch.push_back(48);
        }
    }

    else
    {
        ch.push_back('(');

        Print_Optimal_Parens(i,s[i][j]);

        Print_Optimal_Parens(s[i][j]+1,j);

        ch.push_back(')');

    }

}

void MatrixChainOrder()
{
    for(int i=1; i<=n; i++)

        m[i][i]=0;

    for(int L=2; L<=n; L++)
    {

        for(int i=1; i<=n-L+1; i++)
        {

            int j = i+L-1;

            m[i][j] = infinity;

            for(int k=i; k<=j-1; k++)
            {

                long long q = m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];

                if(q<m[i][j])
                {

                    m[i][j] = q;

                    s[i][j] = k;
                }
            }
        }
    }
}


int main()
{

    char c[200];

    int d1,d2,test=1,in;

    while(cin>>n && n)
    {
        ch.clear();

        in = 0;

        cin>>p[0]>>p[1];

        for(int i=2; i<=n; i++)
        {
            cin>>d1>>d2;

            p[i] = d2;
        }

        MatrixChainOrder();

        Print_Optimal_Parens(1,n);

        c[in++] = ch[0];

        int len = ch.size();

        for(int i=1; i<len-2; i++)
        {
            if(((ch[i]>='0')&&(ch[i]<='9'))&&(ch[i+1]!=')')&&(ch[i+1]!='0'))
            {
                c[in++] = ch[i];

                c[in++] = ' ';

                c[in++] = 'x';

                c[in++] = ' ';
            }

            else if(((ch[i]>='0')&&(ch[i]<='9'))&&(ch[i+2]!=')')&&(ch[i+1]=='0'))
            {
                c[in++] = ch[i];

                i++;

                c[in++] = ch[i];

                c[in++] = ' ';

                c[in++] = 'x';

                c[in++] = ' ';
            }

            else if((ch[i]=='A')&&(ch[i-1]==')'))
            {
                c[in++] = ' ';

                c[in++] = 'x';

                c[in++] = ' ';

                c[in++] = ch[i];
            }

            else if((ch[i]=='(')&&ch[i-1]==')')
            {
                c[in++] = ' ';

                c[in++] = 'x';

                c[in++] = ' ';

                c[in++] = ch[i];
            }

            else
            {
                c[in++] = ch[i];
            }
        }

        c[in++] = ch[len-2];

        c[in++] = ch[len-1];

        c[in] = '\0';

        cout<<"Case "<<test++<<": ";

        cout<<c<<endl;

    }

    return 0;
}
