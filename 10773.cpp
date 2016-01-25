#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    int width_of_river,river_speed,boat_speed;
    int i,cases;
    scanf("%d",&cases);
    {
        for(i=1;i<=cases;i++)
        {
            scanf("%d %d %d",&width_of_river,&river_speed,&boat_speed);
            if(river_speed>=boat_speed||boat_speed==0||river_speed==0)
                printf("Case %d: can't determine\n",i);
            else
            {
                double short_time=0,time_for_short_distance=0;
                  short_time=width_of_river*1.0/boat_speed;
                  time_for_short_distance=width_of_river*1.0/(sqrt((boat_speed*boat_speed)-(river_speed*river_speed)));
                  printf("Case %d: %.3f\n",i,time_for_short_distance-short_time);
            }
        }
    }
    return 0;
}
