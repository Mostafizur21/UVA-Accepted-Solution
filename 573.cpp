#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    float initial_height,Distance_Climbed,Height_After_Climbing,Height_After_Sliding,f;
    int H,U,D,F,day;
    while(scanf("%d %d %d %d", &H,&U,&D,&F))
    {
        initial_height = Distance_Climbed = Height_After_Climbing = Height_After_Sliding = day = 0;
        if(H==0)
            break;
        Distance_Climbed = U;
        f = ((float)(U*F)/100);
        while(1)
        {
            day++;
            initial_height = Height_After_Sliding;
            if(day>1)
                Distance_Climbed = Distance_Climbed-f;
            if(Distance_Climbed<0)
            {
                Distance_Climbed=0;
            }
            Height_After_Climbing = initial_height+Distance_Climbed;
            if(Height_After_Climbing>H)
                break;
            Height_After_Sliding = Height_After_Climbing-D;
            if(Height_After_Sliding<0)
                break;
        }

        if(Height_After_Sliding<0)
            printf("failure on day %d\n",day);
        else
            printf("success on day %d\n",day);
    }
    return 0;
}

