#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int row,column,i,j,k,m,n;
    while(scanf("%d%d",&row,&column)!=EOF)
    {
        m=0;
        n=0;
        if(row==column)
            printf("%d\n",(row*column)-1);
        else
        {
            m=row-1;
            for(i=1; i<=row; i++)
                n=n+(column-1);
            printf("%d\n",m+n);
        }
    }
    return 0;
}
