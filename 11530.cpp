#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cstdio>

using namespace std;

int main()
{
     char input[101];
    int total_press,i,case_number;
    while(scanf("%d",&case_number)!=EOF)
    {
        getchar();
        for(int j=1;j<=case_number;j++)
        {
            total_press=0;
            gets(input);
            for(i=0;input[i]!='\0';i++)
            {
                if((input[i]=='a')||(input[i]=='d')||(input[i]=='g')||(input[i]=='j')||(input[i]=='m')||(input[i]=='p')||(input[i]=='t')||(input[i]=='w')||(input[i]==' '))
                     total_press=total_press+1;
                else if((input[i]=='b')||(input[i]=='e')||(input[i]=='h')||(input[i]=='k')||(input[i]=='n')||(input[i]=='q')||(input[i]=='u')||(input[i]=='x'))
                    total_press=total_press+2;
                else if((input[i]=='c')||(input[i]=='f')||(input[i]=='i')||(input[i]=='l')||(input[i]=='o')||(input[i]=='r')||(input[i]=='v')||(input[i]=='y'))
                    total_press=total_press+3;
                else if((input[i]=='s')||(input[i]=='z'))
                    total_press=total_press+4;
            }
            cout<<"Case #"<<j<<": "<<total_press<<endl;
        }
    }
    return 0;
}
