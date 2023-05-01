#include<stdio.h>
int main()
{
    long long i,n,x,j,d;

    scanf("%lld",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%lld",&x);
        d=1;
        for(j=1; j<=x; j++)
        {
            d = d*j;
        }
        printf("%lld\n",d);
    }





    return 0;
}