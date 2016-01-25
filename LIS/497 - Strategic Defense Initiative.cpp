#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#define mx 10000

using namespace std;

int n;
int Sequence[mx];
int L[mx];
int LisSequence[mx];

void takeInput()
{
    long long int i=0;
    char ch[15];
    while(gets(ch)&&strlen(ch))
    {
        Sequence[i++] = atoi(ch);
    }
    n=i;
}

int LIS()
{
    int i, j;
    for( i = 0; i < n; i++ )
        L[i] = 1;
    for( i = 0; i < n; i++ )
    {
        for( j = i + 1; j < n; j++ )
        {
            if( Sequence[j] > Sequence[i] )
            {
                if( L[j] < L[i] + 1 )
                    L[j] = L[i] + 1;
            }
        }
    }
   int maxLength = 0;
    for( i = 0; i < n; i++ )
    {
        if( maxLength < L[i]  )
            maxLength = L[i];
    }
    return maxLength;
}

void findSequence(int maxLength )
{
    int i, j;
    i = 0;
    for( j = 1; j < n; j++ )
    {
        if( L[j] > L[i] )
            i = j;
    }
    int top = L[i] - 1;
    LisSequence[top] = Sequence[i];
    top--;
    for( j = i - 1; j >= 0; j-- )
    {
        if( Sequence[j] < Sequence[i] && L[j] == L[i] - 1 )
        {
            i = j;
            LisSequence[top] = Sequence[i];
            top--;
        }
    }

    printf("Max hits: %d\n", maxLength);
    for( i = 0; i < maxLength; i++ )
    {
        printf("%d\n", LisSequence[i]);
    }
}

int main()
{
    int test;
    scanf("%d",&test);
    getchar();
    char ch[2];
    gets(ch);
    bool right = false;
    while(test--)
    {
        if(right)
            cout<<endl;

        right = true;

        takeInput();

        int result = LIS();

        findSequence( result );
    }
    return 0;
}
