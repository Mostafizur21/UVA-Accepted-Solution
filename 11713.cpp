#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int test,len1,len2,i,j,m;
    char ch1[25],ch2[25];
    scanf("%d",&test);
        getchar();
        for(j=1;j<=test;j++)
        {
            m=0;
            gets(ch1);
            gets(ch2);
            len1=strlen(ch1);
            len2=strlen(ch2);
            if(len1==len2)
            {
                for(i=0;ch1[i]!='\0';i++)
                {
                        if((ch1[i]=='a')||(ch1[i]=='e')||(ch1[i]=='i')||(ch1[i]=='o')||(ch1[i]=='u'))
                        {
                            m=1;
                            continue;
                        }
                        else if(ch1[i]==ch2[i])
                        {
                            m=1;
                        }
                        else
                        {
                            m=0;
                            break;
                        }
                }
                if(m==0)
                    printf("No\n");
                else
                    printf("Yes\n");
            }
            else
                printf("No\n");
        }
    return 0;
}
