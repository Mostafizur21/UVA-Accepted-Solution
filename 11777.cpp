#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;

int main()
{
    int term1,term2,fin,attendance,class_test1,class_test2,result,avarage,a[3],i,j,k,m,n,p;
    while(scanf("%d",&p)!=EOF)
    {
        n=1;
        for(int q=1;q<=p;q++)
        {
            cin>>term1>>term2>>fin>>attendance>>a[0]>>a[1]>>a[2];
            for(j=0;j<3;j++)
            {
                for(i=0;i<3;i++)
                {
                    if(a[i]>a[i+1])
                    {
                        m=i+1;
                        if(m==3)
                        break;
                        k=a[m];
                       a[m]=a[i];
                        a[i]=k;
                    }
                }
            }
            class_test1=a[1];
            class_test2=a[2];
            avarage=(class_test1+class_test2)/2;
            result=term1+term2+fin+attendance+avarage;
            if(result>=90)
                cout<<"Case "<<n++<<": "<<"A\n";
           else if(result>=80&&result<90)
                cout<<"Case "<<n++<<": "<<"B\n";
           else if(result>=70&&result<80)
                cout<<"Case "<<n++<<": "<<"C\n";
            else if(result>=60&&result<<70)
                cout<<"Case "<<n++<<": "<<"D\n";
            else
                cout<<"Case "<<n++<<": "<<"F\n";
        }
    }
    return 0;
}
