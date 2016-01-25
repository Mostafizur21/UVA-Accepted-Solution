#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i,j,n,x,k;
    double a,b,d;
    char ch[85],c[5];
    cin>>test;
    getchar();
    while(test--)
    {
        cin>>ch;
        n=x=0;
        d=0.0;

        for(i=0; ch[i]!='\0'; i++)
        {
            x=0;
            if(ch[i]=='C'||ch[i]=='H'||ch[i]=='O'||ch[i]=='N')
            {
                if(ch[i]=='C')
                    a=12.01;
                else if(ch[i]=='H')
                    a=1.008;
                else if(ch[i]=='O')
                    a=16.00;
                else
                    a=14.01;

                for(j=i+1; ch[j]!='\0'; j++)
                {
                    if(ch[j]=='C'||ch[j]=='H'||ch[j]=='O'||ch[j]=='N')
                    {
                        if(n>0)
                        {
                            c[n] = '\0';
                            k=atoi(c);
                        }
                        else
                            k=1;
                        d+=k*a;
                        n=0;
                        x=1;
                        break;
                    }
                    else
                        c[n++]=ch[j];

                }
                i=j-1;
            }
        }

        if(x==0)
        {
            if(n>0)
            {
                c[n] = '\0';
                k=atoi(c);
            }
            else
                k=1;
            d+=k*a;
        }

        printf("%.3lf\n",d);
    }
    return 0;
}
