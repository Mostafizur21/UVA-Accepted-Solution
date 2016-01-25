#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int input,i,j,k,m=1;
    while(scanf("%d",&input)!=EOF)
    {
        if(input<0)
            break;
        k=1;
        i=0;
        while(k<input)
        {
            k=k*2;
            i++;
        }
        cout<<"Case "<<m++<<": "<<i<<endl;
    }
    return 0;
}
