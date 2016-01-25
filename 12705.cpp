#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int test,arr1[36],arr[36],X;
    char ch[110];
    arr1[0]=2;
    arr1[1]=3;
    arr1[2]=3;
    arr1[3]=4;
    arr1[4]=4;
    arr1[5]=4;
    arr1[6]=5;
    arr1[7]=5;
    arr1[8]=5;
    arr1[9]=5;
    arr1[10]=6;
    arr1[11]=6;
    arr1[12]=6;
    arr1[13]=6;
    arr1[14]=6;
    arr1[15]=7;
    arr1[16]=7;
    arr1[17]=7;
    arr1[18]=7;
    arr1[19]=7;
    arr1[20]=7;
    arr1[21]=8;
    arr1[22]=8;
    arr1[23]=8;
    arr1[24]=8;
    arr1[25]=8;
    arr1[26]=9;
    arr1[27]=9;
    arr1[28]=9;
    arr1[29]=9;
    arr1[30]=10;
    arr1[31]=10;
    arr1[32]=10;
    arr1[33]=11;
    arr1[34]=11;
    arr1[35]=12;


    cin>>test;
    getchar();

    for(X=1;X<=test;X++)
    {

        memset(arr,0,sizeof(arr));


        gets(ch);
        //cout<<ch<<endl;

        int i;

        for(i=0;ch[i]!='\0';i++)
        {
            if(ch[i]=='0')
                arr[0]++;
            else if(ch[i]=='1')
                arr[1]++;
                else if(ch[i]=='2')
                arr[2]++;
                else if(ch[i]=='3')
                arr[3]++;
                else if(ch[i]=='4')
                arr[4]++;
                else if(ch[i]=='5')
                arr[5]++;
                else if(ch[i]=='6')
                arr[6]++;
                else if(ch[i]=='7')
                arr[7]++;
                else if(ch[i]=='8')
                arr[8]++;
                else if(ch[i]=='9')
                arr[9]++;


                else if(ch[i]=='A')
                arr[10]++;
                else if(ch[i]=='B')
                arr[11]++;
                else if(ch[i]=='C')
                arr[12]++;
                else if(ch[i]=='D')
                arr[13]++;
                else if(ch[i]=='E')
                arr[14]++;
                else if(ch[i]=='F')
                arr[15]++;
                else if(ch[i]=='G')
                arr[16]++;
                else if(ch[i]=='H')
                arr[17]++;
                else if(ch[i]=='I')
                arr[18]++;
                else if(ch[i]=='J')
                arr[19]++;
                else if(ch[i]=='K')
                arr[20]++;
                else if(ch[i]=='L')
                arr[21]++;
                else if(ch[i]=='M')
                arr[22]++;
                else if(ch[i]=='N')
                arr[23]++;
                else if(ch[i]=='O')
                arr[24]++;
                else if(ch[i]=='P')
                arr[25]++;
                else if(ch[i]=='Q')
                arr[26]++;
                else if(ch[i]=='R')
                arr[27]++;
                else if(ch[i]=='S')
                arr[28]++;
                else if(ch[i]=='T')
                arr[29]++;
                else if(ch[i]=='U')
                arr[30]++;
                else if(ch[i]=='V')
                arr[31]++;
                else if(ch[i]=='W')
                arr[32]++;
                else if(ch[i]=='X')
                arr[33]++;
                else if(ch[i]=='Y')
                arr[34]++;
                else if(ch[i]=='Z')
                arr[35]++;
        }

        sort(arr,arr+36);

        int sum=0,n=0,p,q;
//        for(p=0;p<36;p++)
//        {
//            cout<<arr1[p]<<"   "<<arr[p]<<endl;
//        }
        for(q=35;q>=0;q--)
        {
            if(arr[q]==0)
                break;
            sum+=arr[q]*arr1[n++];
        }
        cout<<sum<<endl;
        //cout<<"X "<<X<<"  "<<test<<endl;
    }
    return 0;
}


