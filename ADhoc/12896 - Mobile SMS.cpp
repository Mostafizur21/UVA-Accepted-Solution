#include<bits/stdc++.h>

using namespace std;

int main()
{

    char arr[11][5];

    arr[0][1] = ' ';

    arr[1][1] = '.';

    arr[1][2] = ',';

    arr[1][3] = '?';

    arr[1][4] = '"';

    int k=0,L1[100],L2[100],T,L;

    for(int i=2; i<=9; i++)
    {
        for(int j=1; j<=3; j++)
            arr[i][j] = 'a'+k++;

        if(i==7||i==9)
            arr[i][4] = 'a'+k++;
    }

    cin>>T;

    while(T--)
    {
        cin>>L;

        for(int i=1; i<=L; i++)
            cin>>L1[i];

        for(int i=1; i<=L; i++)
            cin>>L2[i];

        for(int i=1; i<=L; i++)
            cout<<arr[L1[i]][L2[i]];

        cout<<endl;
    }

    return 0;
}
