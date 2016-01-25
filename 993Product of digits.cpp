#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int test,input,y,a,len;
    char ch[20];
    scanf("%d",&test);
    for(a = 1; a<=test; a++)
    {
        len = 0;
        cin>>input;
        y=input;

//            if(input==0)
//            {
//                cout<<"10"<<endl;
//            }

        if(input==0||input==1)
        {
            cout<<input<<endl;
        }

        else
        {
            for(int p=9; p>=2; p--)
            {
                while(y%p==0)
                {
                    ch[len++]=p+48;
                    y=y/p;
                }
            }

            if(y>9)
                cout<<"-1"<<endl;

            else
            {
                ch[len]='\0';
                char c[20],n=0;
                for(int i=len-1; i>=0; i--)
                    c[n++]=ch[i];
                c[n]='\0';
                cout<<c<<endl;
            }
        }
    }
    return 0;
}

