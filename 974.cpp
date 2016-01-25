#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
    int Kaprekar_numbers[40001],N,INF,SUP,i,j,k,m,n,a,b,c,d,x,y,z,p;
    char ch[12],ch1[12];
    memset(Kaprekar_numbers,0,sizeof(Kaprekar_numbers));
    for(i=2;i<=40000;i++)
    {
        n=i*i;
            k=0;
            while(n>0)
            {
                ch[k++]=n%10+48;
                n/=10;
            }
            ch[k]='\0';
            p=k-1;
            for(x=0;x<k-1;x++)
            {
                d=0;
                for(y=k-1;y>=p;y--)
                {
                    ch1[d++]=ch[y];
                }
                ch1[d]='\0';
                b=atoi(ch1);
                d=0;
                for(z=y;z>=0;z--)
                {
                    ch1[d++]=ch[z];
                }
                ch1[d]='\0';
                c=atoi(ch1);
                if((b+c==i)&&b>0&&c>0)
                {
                    Kaprekar_numbers[i]=i;
                    break;
                }
                p--;
            }
    }

    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d %d",&INF,&SUP);
        m=0;
        if(INF>SUP)
        {
            int temp=INF;
            INF=SUP;
            SUP=temp;
        }
        if(i>1)
            cout<<endl;
        cout<<"case #"<<i<<endl;
        for(j=INF;j<=SUP;j++)
        {
            if(Kaprekar_numbers[j]!=0)
            {
                cout<<Kaprekar_numbers[j]<<endl;
                m=1;
            }
        }
        if(m==0)
            cout<<"no kaprekar numbers\n";
     }
    return 0;
}
