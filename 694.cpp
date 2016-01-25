#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long int i,j,k,A,limit,m=1;
    while(scanf("%lld %lld",&A,&limit)!=EOF)
    {
        if(A<0&&limit<0)
            break;
         k=0;
            i=A;
            for(;;)
            {
                if(i==1)
                {
                    k++;
                    break;
                }
                else if(i%2==0)
                {
                    i=i/2;
                    k++;
                }
                else
                {
                    i=(i*3)+1;
                    k++;
                    if(i>limit)
                        break;
                }
            }
            cout<<"Case "<<m++<<": A = "<<A<<", limit = "<<limit<<", number of terms = "<<k<<endl;
    }
    return 0;
}
