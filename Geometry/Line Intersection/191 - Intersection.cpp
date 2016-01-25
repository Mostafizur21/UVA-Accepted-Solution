#include<bits/stdc++.h>

using namespace std;

struct point
{
    int x;
    int y;
};

// Given three colinear points p, q, r, the function checks if
// point q lies on line segment 'pr'
bool onSegment(point p,point q,point r)
{
    if(q.x<=max(p.x,r.x)&&q.x>=min(p.x,r.x)&&q.y<=max(p.y,r.y)&&q.y>=min(p.y,r.y))
        return true;

    return false;
}


// To find orientation of ordered triplet (p, q, r).
// The function returns following values
// 0 --> p, q and r are colinear
// 1 --> Clockwise
// 2 --> Counterclockwise
int orientation(point p,point q,point r)
{
    int value = (q.y-p.y)*(r.x-q.x)-(q.x-p.x)*(r.y-q.y);

    if(value == 0)
        return 0;

    if(value>0)
        return 1;

    if(value<0)
        return 2;
}


// The main function that returns true if line segment 'p1q1'
// and 'p2q2' intersect.

int doIntersect(point p1,point q1,point p2,point q2)
{
    int a = orientation(p1,q1,p2);
    int b = orientation(p1,q1,q2);
    int c = orientation(p2,q2,p1);
    int d = orientation(p2,q2,q1);

    // General case
    if(a!=b&&c!=d)
        return 1;

    // Special Cases
    // p1, q1 and p2 are colinear and p2 lies on segment p1q1
    if(a==0&& onSegment(p1,p2,q1))
        return 1;

    // p1, q1 and p2 are colinear and q2 lies on segment p1q1
    if(b==0&& onSegment(p1,q2,q1))
        return 1;

    // p2, q2 and p1 are colinear and p1 lies on segment p2q2
    if(c==0&& onSegment(p2,p1,q2))
        return 1;


    // p2, q2 and q1 are colinear and q1 lies on segment p2q2
    if(d==0&& onSegment(p2,q1,q2))
        return 1;

    return 0;// Doesn't fall in any of the above cases
}

int main()
{

    struct point p1,p2,q1,q2,q3,q4;

    int test;

    int x_start,y_start,x_end,y_end,x_left,y_top,x_right,y_bottom;

    cin>>test;

    for(int i=1; i<=test; i++)
    {
        cin>>x_start>>y_start>>x_end>>y_end>>x_left>>y_top>>x_right>>y_bottom;

        if(x_left>x_right)
        {
            int temp = x_left;
            x_left = x_right;
            x_right  = temp;
        }

        if(y_bottom>y_top)
        {
            int tmp  = y_bottom;
            y_bottom =  y_top;
            y_top = tmp;
        }

        p1.x = x_start;
        p1.y = y_start;

        q1.x = x_end;
        q1.y = y_end;

        p2.x = x_left;
        p2.y = y_top;

        q2.x = x_right;
        q2.y = y_bottom;

        q3.x = x_left;
        q3.y = y_bottom;

        q4.x = x_right;
        q4.y = y_top;

        if((doIntersect(p1,q1,p2,q3))||(doIntersect(p1,q1,p2,q4))||(doIntersect(p1,q1,q2,q3))||(doIntersect(p1,q1,q2,q4))||(x_start>=x_left&&x_start<=x_right&&x_end>=x_left&&x_end<=x_right&&y_start>=y_bottom&&y_start<=y_top&&y_end>=y_bottom&&y_end<=y_top))
            cout<<"T"<<endl;

        else
            cout<<"F"<<endl;

    }

    return 0;
}
