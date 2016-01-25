/**********Accepted***********/
#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int test_case,total_number,input[50],high_jump,low_jump,i,j,k,n;
    while(scanf("%d",&test_case)!=EOF)
    {
        n=1;
        for(i=1;i<=test_case;i++)
        {
            high_jump=0;
            low_jump=0;
            cin>>total_number;
            for(j=0;j<total_number;j++)
                cin>>input[j];
             for(k=0;k<total_number-1;k++)
             {
                 if(input[k]<input[k+1])
                    high_jump+=1;
                 else if(input[k]>input[k+1])
                    low_jump+=1;
             }
             cout<<"Case "<<n++<<": "<<high_jump<<" "<<low_jump<<endl;
        }
    }
    return 0;
}
