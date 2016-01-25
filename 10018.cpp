#include<iostream>

using namespace std;

int main()
{
    long long int a,b,c,d,e,i,j,k,m,n;
    cin>>c;
    for(j=1;j<=c;j++){
            cin>>m;
    k=0;
    for(i=1;;i++)
    {
        b=0;
        n=m;
           while(n>=1)
           {
              b=(b*10)+(n%10);
              n=n/10;
           }
           if(m==b)
            break;
           else
            {
                m=m+b;
                k++;
            }
    }
    cout<<k<<" "<<m<<"\n";
    }
    return 0;
}
