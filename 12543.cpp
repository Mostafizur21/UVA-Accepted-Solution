#include <iostream>
#include<cstring>
#include<cstdio>

using namespace std;


int main(){
    string a,b;
    char ch[100000],result[100000],c;
    int len,i=0,j,k=0,m=0,n,p,q;
    while(a!="E-N-D")
    {
        cin>>a;
        len=a.size();
        q=0;
        for(p=0;p<len;p++)
        {
            c=a[p];
            if(c>='a'&&c<='z'||c>='A'&&c<='Z'||c=='-')
                q++;
        }
        if(q>i)
        {
            b=a;
            i=q;
        }
    }

    for(j=0;j<b.size();j++)
    {
        ch[j]=b[j];
    }
    ch[j]='\0';
    for(n=0;ch[n]!='\0';n++)
    {
        if(ch[n]>='A'&&ch[n]<='Z')
            result[m++]=ch[n]+32;
        else if(ch[n]>='a'&&ch[n]<='z'||ch[n]=='-')
            result[m++]=ch[n];
    }
    result[m]='\0';

    cout<<result<<endl;
    return 0;
}
