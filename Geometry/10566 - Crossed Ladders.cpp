#include<bits/stdc++.h>
#define eps 1e-7

double x,y,c,w,low,mid,high;

using namespace std;

double cal(double w)
{
    double p = (double) sqrt(x*x-w*w);

    double q = (double) sqrt(y*y-w*w);

    double c =(double) (1.0/(double)((1.0/p)+(1.0/q)));

    return c;
}

int main()
{

    while(scanf("%lf %lf %lf",&x,&y,&c)!=EOF)
    {

        low = 0;

        high = min(x,y);

        while(low+eps<high)
        {
            mid = (low+high)/2.0;

            double temp = cal(mid);

            if(temp>c)
                low = mid;

            else
                high = mid;

        }

        printf("%.3lf\n",low);

    }

    return 0;
}
