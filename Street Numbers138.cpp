#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr_first[12],arr_second[12],i,m=2,n=2;
    double sum=1225.0;
    arr_first[0]=6;
    arr_first[1]=35;
    arr_second[0]=8;
    arr_second[1]=49;
    for(i=50;;i++)
    {
        sum+=i;
        if(sqrt(sum)==int(sqrt(sum)))
        {
            arr_first[m]=int(sqrt(sum));
            arr_second[m]=i;
            m++;
            if(m==10)
                break;
        }
    }
    for(i=0;i<m;i++)
        printf("%10d%10d\n",arr_first[i],arr_second[i]);
    return 0;
}
