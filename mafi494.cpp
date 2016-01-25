/*******************Accepted*********************/
#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    char a[1000000];
    int i,j=0,m=0;
    while(gets(a))
    {
        j=0;
        m=0;
        for(i=0;a[i]!='\0';i++)
        {
            if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
            {
                m=1;
                continue;
            }

           else if(m==1)
                {
                    j++;
                    m=0;
                }
        }
        if(m==1)
            j++;
        cout<<j<<endl;
    }
    return 0;
}
