#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    long long int test,n,a,b,i,j,k,m,arr_of_prime_a[10000],arr_of_power_a[10000],y,z,sq,index,arr_of_power_b[10000],arr_of_prime_b[100000],ind,total_prime[10000],total_power[10000],in,arr1[10000],arr2[10000],arr3[10000],a1,a2,a3;
    scanf("%lld",&test);
    for(i = 1; i<=test; i++)
    {
        cin>>n>>a>>b;

        //prime factorization of a;
        y=a;
        z=index=ind=in=a1=a2=a3=0;
        sq =sqrt(y);

        while(y%2==0)
        {
            z++;
            y/=2;
        }

        if(z!=0)
        {
            arr_of_prime_a[index]=2;
            arr_of_power_a[index]=z;
            index++;
        }

        for(int p=3; p<=sq; p=p+2)
        {
            z=0;
            while(y%p==0)
            {
                z++;
                y=y/p;
            }
            if(z!=0)
            {
                arr_of_prime_a[index]=p;
                arr_of_power_a[index]=z;
                index++;
            }
        }

        if(y!=1)
        {
            arr_of_prime_a[index]=y;
            arr_of_power_a[index]=1;
            index++;
        }

        //prime factorization of b
        y=b;
        z=0;
        sq =sqrt(y);

        while(y%2==0)
        {
            z++;
            y/=2;
        }

        if(z!=0)
        {
            arr_of_prime_b[ind]=2;
            arr_of_power_b[ind]=z;
            ind++;
        }

        for(int p=3; p<=sq; p=p+2)
        {
            z=0;
            while(y%p==0)
            {
                z++;
                y=y/p;
            }
            if(z!=0)
            {
                arr_of_prime_b[ind]=p;
                arr_of_power_b[ind]=z;
                ind++;
            }
        }

        if(y!=1)
        {
            arr_of_prime_b[ind]=y;
            arr_of_power_b[ind]=1;
            ind++;
        }


        //if a===F0&&b==F1,so F2=F0*F1 and here taking F2 in an another array
        int t;
        for(j=0; j<index; j++)
        {
            t=0;
            for(k=0; k<ind; k++)
            {
                if(arr_of_prime_a[j]==arr_of_prime_b[k])
                {
                    total_prime[in]=arr_of_prime_a[j];
                    total_power[in]=arr_of_power_a[j]+arr_of_power_b[k];
                    in++;
                    t=1;
                    break;
                }
            }
            if(t==0)
            {
                total_prime[in]=arr_of_prime_a[j];
                total_power[in]=arr_of_power_a[j];
                in++;
            }
        }


        for(j=0; j<ind; j++)
        {
            t=0;
            for(k=0; k<in; k++)
            {
                if(arr_of_prime_b[j]==total_prime[k])
                {
                    t=1;
                    break;
                }
            }
            if(t==0)
            {
                total_prime[in]=arr_of_prime_b[j];
                total_power[in]=arr_of_power_b[j];
                in++;
            }
        }


        //for prime increasing order
        for(j=0; j<in; j++)
        {
            for(k=0; k<in; k++)
            {
                if(total_prime[j]<total_prime[k])
                {
                    int temp = total_prime[j];
                    total_prime[j]=total_prime[k];
                    total_prime[k]=temp;

                    int tmp = total_power[j];
                    total_power[j]=total_power[k];
                    total_power[k]=tmp;
                }
            }
        }

        if(n==2)
        {
            for(j=0; j<in; j++)
                cout<<total_prime[j]<<" "<<total_power[j]<<endl;
            cout<<endl;
        }
        else
        {
            for(j=0; j<in; j++)
                arr2[a2++]=total_power[j];

            for(j=0; j<in; j++)
            {
                t=0;
                for(k=0; k<ind; k++)
                {
                    if(total_prime[j]==arr_of_prime_b[k])
                    {
                        arr1[a1++]=arr_of_power_b[k];
                        t=1;
                        break;
                    }
                }
                if(t==0)
                    arr1[a1++]=0;
            }

            int f3,f2,f1;
            for(k=0; k<a1; k++)
            {
                f1=arr1[k];
                f2=arr2[k];
                for(j=3; j<=n; j++)
                {

                    f3=f1+f2;//Fn=Fn-1+Fn-2
                    f1=f2;
                    f2=f3;
                }
                arr3[k]=f3;
            }

            for(j=0; j<in; j++)
                cout<<total_prime[j]<<" "<<arr3[j]<<endl;
            cout<<endl;
        }
    }
    return 0;
}

