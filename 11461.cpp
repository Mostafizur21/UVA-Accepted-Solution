#include<iostream>
#include<cstdio>
#include<cmath>
#include<cmath>

using namespace std;

int main()
{
    int input1,input2,i,result,total_sq_no,m;
    while(scanf("%d %d",&input1,&input2)!=EOF)
    {
        if(input1==0&&input2==0)
            break;
        total_sq_no=0;
        m=1;
        for(;;)
        {
            result=pow(m,2);
            m++;
            if(result>=input1&&result<=input2)
                total_sq_no=total_sq_no+1;
           if(result<input1)
            continue;
            if(result>input2)
                break;
        }
        cout<<total_sq_no<<endl;
    }
    return 0;
}
