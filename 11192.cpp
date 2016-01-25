#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>

using namespace std;
void reverse(char ch[], int low, int High)
{
    int ln = (low+High)/2;
    for(int i=low; i<=ln; i++)
    {
        char temp = ch[i];
        ch[i]=ch[High+low-i];
        ch[High+low-i]=temp;

    }
}

int main()
{
    int i,number,j,k,len;
    char a[10000];
    while(scanf("%d",&number))
    {
        if(number==0)
            break;
        getchar();
        gets(a);
        {
            len=strlen(a);
            k=len/number;
            j=k-1;
            for(i=0; a[i]!='\0';i++)
            {
                    reverse(a, i, j);
                    i=j;
                    j=j+k;
            }
            printf("%s\n",a);
        }
    }
    return 0;
}

