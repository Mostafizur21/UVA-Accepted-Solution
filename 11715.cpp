#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
   double u,v,s,a,t,i,j,k,m;
   int number,n=1;
    while(scanf("%d",&number)!=EOF)
    {
        if(number==0)
            break;
        if(number==1)
        {
             cin>>u>>v>>t;
             a=((v-u)/t);
             s=((u*t)+(.5*a*t*t));
             printf("Case %d: %.3f %.3f\n",n++,s,a);
        }
        else if(number==2)
        {
            cin>>u>>v>>a;
            t=(v-u)/a;
            s=((u*t)+(.5*a*t*t));
            printf("Case %d: %.3f %.3f\n",n++,s,t);
        }
        else if(number==3)
        {
              cin>>u>>a>>s;
              v=(sqrt)((u*u)+(2*a*s));
              t=(v-u)/a;
              printf("Case %d: %.3f %.3f\n",n++,v,t);
        }
        else if(number==4)
        {
              cin>>v>>a>>s;
              u=(sqrt)((v*v)-(2*a*s));
               t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n",n++,u,t);
        }
    }
    return 0;
}
