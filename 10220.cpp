#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<vector>
#include<queue>
#include<deque>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<set>
#include<cstdlib>
#include<ctime>
#include<cctype>
#include<sstream>
#include<utility>
#include<complex>
#include<cstring>

using namespace std;

string convertInt(int number)
{
    if (number == 0)
        return "0";
    string temp="";
    string returnvalue="";
    while (number>0)
    {
        temp+=number%10+48;
        number/=10;
    }
    for (int i=0;i<temp.length();i++)
        returnvalue+=temp[temp.length()-i-1];
    return returnvalue;
}

int main()
{
    string a,b,e,f,g,st,str[1000];
    str[0]='1';
    char c[2570],d[2570];
    int i,j,k,len1,len2,m,n,r,carry,x,y,z,input;
    for(r=0;r<999;r++)
    {
        a=str[r];
        b = convertInt(r+2);
        k=carry=y=z=0;
            len1=a.size();
            len2=b.size();
            reverse(a.begin(),a.end());
            reverse(b.begin(),b.end());
            for(j=0;j<len2;j++)
            {
                k=0;
                y=0;
                z=0;
                carry=0;
                for(i=0;i<len1;i++)
                {
                    m=((a[i]-'0')*(b[j]-'0'))+carry;
                    carry=0;
                    if(m>9)
                    {
                        n=m%10;
                        carry=m/10;
                    }
                    else
                        n=m;
                    if(j==0)
                    {
                       c[k++]=n+48;
                    }
                    else
                    {
                        if(z==0)
                        for(x=0;x<j;x++)
                        {
                            d[y++]=48;
                        }
                        d[y++]=n+48;
                         z=1;
                    }
                }
                if(carry!=0&&j==0)
                {
                   c[k++]=carry+48;
                   c[k]='\0';
                }
                if(carry==0&&j==0)
                    c[k]='\0';
                if(carry!=0&&j>0)
                {
                    d[y++]=carry+48;
                    d[y]='\0';
                }
                if(carry==0&&j>0)
                {
                    d[y]='\0';
                }
                if(j>0)
                {
                    e=c;
                    f=d;
                    char carry1='0',c1[2570];
                    string a1,b1,d1;
                    int i1,j1,k1,m1,n1,len11,len21;
                    len11=e.size();
                    len21=f.size();
                    a1=e;
                    b1=f;
                    k1=0;
                   if(len21<len11)
                    {
                        for(i1=0;i1<len21;i1++)
                        {
                            m1=a1[i1]+b1[i1]+carry1-96;
                            if(m1>57)
                            {
                                carry1='1';
                                c1[k1++]=m1-10;

                            }
                            else
                            {
                                carry1='0';
                                c1[k1++]=m1;
                            }
                        }
                        for(i1=len21;i1<len11;i1++)
                        {
                            m1=a[i1]+carry1-48;
                            if(m1>57)
                            {
                                carry1='1';
                                c1[k1++]=m1-10;

                            }
                            else
                            {
                                carry1='0';
                                c1[k1++]=m1;
                            }
                        }
                        if(carry1=='1')
                            c1[k1++]='1';
                    }
                else
                {
                    for(i1=0;i1<len11;i1++)
                    {
                        m1=a1[i1]+b1[i1]+carry1-96;
                        if(m1>57)
                        {
                            carry1='1';
                            c1[k1++]=m1-10;

                        }
                        else
                        {
                            carry1='0';
                            c1[k1++]=m1;
                        }
                    }
                    for(i1=len11;i1<len21;i1++)
                    {
                        m1=b1[i1]+carry1-48;
                        if(m1>57)
                        {
                            carry1='1';
                            c1[k1++]=m1-10;

                        }
                        else
                        {
                            carry1='0';
                            c1[k1++]=m1;
                        }
                    }
                    if(carry1=='1')
                        c1[k1++]='1';
                }
                c1[k1]='\0';
                g=c1;
                strcpy(c,g.c_str());
                }
            }
            st=c;
            reverse(st.begin(),st.end());
            str[r+1]=st;
        }
        while(scanf("%d",&input)!=EOF)
        {
            if(input==0)
                cout<<"0"<<endl;
            else
            {
                int result=0;
                string s;
                s=str[input-1];
                for(int i=0;i<s.size();i++)
                {
                    result+=s[i]-48;
                }
                cout<<result<<endl;
            }
        }
    return 0;
}
