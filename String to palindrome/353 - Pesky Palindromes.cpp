#include<bits/stdc++.h>

using namespace std;

string s;

set<string>st;

void longestPalindrome()
{
    int longeststart = 0, longestend = 0;

    int len = s.size();

    for(int mid=0; mid<len; mid++)
    {
        //for odd length ada when we choose d for mid

        int left = mid;
        int right = mid;

        while(left>=0&&right<len)
        {
            if(s[left]==s[right])
            {

                string sub="";

                for(int i=left; i<=right; i++)
                    sub+=s[i];

                st.insert(sub);

            }

            else
                break;

            left--;
            right++;
        }


        //for even length adam when we choose da for mid
        left = mid;
        right = mid+1;

        while(left>=0&&right<len)
        {
            if(s[left]==s[right])
            {

                string sub="";

                for(int i=left; i<=right; i++)
                    sub+=s[i];

                st.insert(sub);

            }

            else
                break;

            left--;
            right++;
        }

    }

}

int main()
{

    while(cin>>s)
    {

        st.clear();

        longestPalindrome();

        cout<<"The string '"<<s<<"' contains "<<st.size()<<" palindromes."<<endl;

    }

    return 0;
}
