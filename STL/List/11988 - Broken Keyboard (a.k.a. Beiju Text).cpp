#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<char>lst;
    list<char>::iterator it;

    int i,index;

    char ch[100000+10],c1[100000+5];

    while(gets(ch))
    {
        lst.clear();

        int len = strlen(ch);

        for(i=0; i<len; i++)
        {

            if(ch[i]=='[')
            {

                index = 0;

                for(i++; i<len; i++)
                {
                    if((ch[i]!='[')&&(ch[i]!=']'))
                        c1[index++] = ch[i];

                    else
                    {
                        i--;
                        break;
                    }
                }

                c1[index] = '\0';

                if(index)
                    for(int j=index-1; j>=0; j--)

                        lst.push_front(c1[j]);

            }

            else if(ch[i]==']')
                continue;


            else

                lst.push_back(ch[i]);



        }


        for (it=lst.begin(); it!=lst.end(); ++it)
            std::cout<<*it;

        cout<<endl;

    }

    return 0;
}
