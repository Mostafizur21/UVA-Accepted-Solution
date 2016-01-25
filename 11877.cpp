//**********Accepted********//
#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int empty_bottles,full_bottles,i,j,k,m,n;
    while(scanf("%d",&empty_bottles)!=EOF)
    {
        full_bottles=0;
        if(empty_bottles==0)
            break;
        if(empty_bottles==2)
            empty_bottles=3;
        while(empty_bottles>=3)
        {
            m=empty_bottles/3;
            empty_bottles=(empty_bottles%3)+m;
            if(empty_bottles==2)
            {
                empty_bottles==3;
                full_bottles=full_bottles+1+m;
                break;
            }
            full_bottles=full_bottles+m;
        }
        cout<<full_bottles<<endl;
    }
    return 0;
}
