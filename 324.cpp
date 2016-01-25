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
#define MAX 366
#define max1 10
int arr[MAX][max1];
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
    string a,b,e,f,g,st,str[366];
    str[0]='1';
    char c[782],d[782];
    int i,j,k,len1,len2,m,n,r,carry,x,y,z,input,dis0,dis1,dis2,dis3,dis4,dis5,dis6,dis7,dis8,dis9,s,t;
    for(t=0;t<10;t++)
    {
        if(t==1)
            arr[0][t]=1;
        else
            arr[0][t]=0;
    }
    for(r=0;r<365;r++)
    {
        a=str[r];
        dis0=dis1=dis2=dis3=dis4=dis5=dis6=dis7=dis8=dis9=0;
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
                    char carry1='0',c1[782];
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
            for(s=0;s<st.size();s++)
            {
                if(st[s]=='0') dis0++;
                else if(st[s]=='1') dis1++;
                else if(st[s]=='2') dis2++;
                else if(st[s]=='3') dis3++;
                else if(st[s]=='4') dis4++;
                else if(st[s]=='5') dis5++;
                else if(st[s]=='6') dis6++;
                else if(st[s]=='7') dis7++;
                else if(st[s]=='8') dis8++;
                else if(st[s]=='9') dis9++;
            }
            arr[r+1][0]=dis0;
            arr[r+1][1]=dis1;
            arr[r+1][2]=dis2;
            arr[r+1][3]=dis3;
            arr[r+1][4]=dis4;
            arr[r+1][5]=dis5;
            arr[r+1][6]=dis6;
            arr[r+1][7]=dis7;
            arr[r+1][8]=dis8;
            arr[r+1][9]=dis9;
        }
        while(scanf("%d",&input))
        {
//            freopen("input.txt", "r", stdin);
//            freopen("output.txt", "w", stdout);
            int p,q;
            if(input==0)
                break;
            cout<<input<<"! --"<<endl;
            for(p=0;p<10;p++)
            {
                if(p==0||p==5)
                cout<<"   ("<<p<<")";
                else if(p!=0&&p!=5)
                    cout<<"    ("<<p<<")";
                    printf("%5d",arr[input-1][p]);
                    if(p==4)
                    printf("\n");
            }
            printf("\n");
        }
    return 0;
}
