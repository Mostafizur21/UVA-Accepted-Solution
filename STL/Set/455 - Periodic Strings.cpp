#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,m,period;
    set<string>st;
    string s;
    scanf("%d",&test);
    for(int t=1; t<=test; t++)
    {
        cin>>s;
        m = s.size();
        bool check=false;
        for(int i=1; i<=m; i++)
        {
            if((m/i)*i==m)
            {
                st.clear();
                for(int j=0; j<m; j+=i)
                    st.insert(s.substr(j,i));
                if(st.size()==1)
                {
                    period=i;
                    check=true;
                    break;
                }
            }
        }
        printf("%d\n",period);
        if(t<test)
            printf("\n");
    }
    return 0;
}
