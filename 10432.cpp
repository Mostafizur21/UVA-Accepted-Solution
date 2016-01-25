#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<vector>
#include<queue>
#include<deque>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<set>
#include<cstdlib>
#include<ctime>
#include<cctype>
#include<sstream>
#include<utility>
#include<complex>
#include<cstring>
#define pi 2*acos(0)

using namespace std;

int main()
{
    double redious,area;
    int number_of_polygon;
    while(cin>>redious>>number_of_polygon)
    {
        area=number_of_polygon*((redious*redious)*sin((2*pi)/number_of_polygon))/2;
        printf("%.3f\n",area);
    }
    return 0;
}
