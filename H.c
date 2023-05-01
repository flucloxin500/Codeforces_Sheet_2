#include<stdio.h>
int main()
{
    int n , i , f1 = 0 , f2 = 0 ;

    scanf("%d",&n);

    for(i=2; i<n; i++)
    {
        if (n % i == 0)
        {
            f1 = 1 ;
        }
        else 
        {
            f2=1;
        }
    }

    if ( f1 > 0 )
    {
       printf("NO\n"); 
    }
    else if ( f1 < 1 )
    {
       printf("YES\n"); 
    }
    else if (n==1)
    {
        printf("NO\n");
    }


    return 0;
}