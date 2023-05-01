#include<stdio.h>
int main()
{
    int n , i , j, f;
    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {

        f=0;

        for ( j = 1 ; j <= i ; j++)
        {
            if ( i % j == 0)
            {
               f++ ;
                
            }
        }

        if ( f == 2)
        {
            printf("%d ", i);
        }
    }

    
    return 0;
}