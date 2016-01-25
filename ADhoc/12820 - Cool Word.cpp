#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test=1,result,n,i,j,k,arr[30],check,rem[40],cont;

    char ch[30];

    while(cin>>n)
    {

        result = 0;
        for(i=1; i<=n; i++)
        {
            cin>>ch;

            check = 0;
            cont = 0;

            memset(arr,0,sizeof arr);

            memset(rem,0,sizeof rem);

            for(j=0; j<ch[j]!='\0'; j++)

                arr[ch[j]-'a']++;


            for(j=0; j<30; j++)
            {
                if(rem[arr[j]]==0)
                {
                    if(arr[j]!=0)
                        {
                            rem[arr[j]]=1;
                            cont++;

                        }

                }

                else
                {
                    check = 1;
                    break;
                }
            }

            if(check==0&&cont>1)
                result++;

        }

        printf("Case %d: %d\n",test++,result);
    }


    return 0;
}
