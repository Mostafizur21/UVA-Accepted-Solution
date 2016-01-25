#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<utility>
#include<complex>
#include<stack>
#include<map>
#include<queue>
#include<algorithm>
#include<set>
#include<deque>
#include<list>
#include<stdexcept>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<ctime>

using namespace std;

int main()
{
    int test,number_of_store,position[21],i,j,ans;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d",&number_of_store);
        for(j=0;j<number_of_store;j++)
            scanf("%d",&position[j]);
        sort(position,position+j);
        ans=2*(position[number_of_store-1]-position[0]);
        printf("%d\n",ans);
    }
    return 0;
}
