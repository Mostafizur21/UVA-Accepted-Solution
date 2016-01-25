#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int empty_bottles,full_bottles,i,j,k,m,n,test,q,r;
    while(scanf("%d",&test)!=EOF)
    {
        for(int p=1;p<=test;p++)
        {
            cin>>empty_bottles>>q>>r;
            full_bottles=0;
            empty_bottles=empty_bottles+q;
            while(empty_bottles>=r)
            {
                m=empty_bottles/r;
                empty_bottles=(empty_bottles%r)+m;
                full_bottles=full_bottles+m;
            }
            cout<<full_bottles<<endl;
        }
    }
    return 0;
}
