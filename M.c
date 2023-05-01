#include<stdio.h>
int main()
{
    int n , x , y , m , t = 0 , u = 0, rem , rem2;
    scanf("%d %d", &n, &m);
    x = n ;
    y = m ;
    while (x > 0)
    {
        rem = x % 10 ;
        if ( rem != 4 && rem != 7)
        {
            t = 1 ;
            break ;
        }
        x = x / 10 ;
    }
    while (y > 0)
    {
        rem = y % 10 ;
        if ( rem2 != 4 && rem != 7)
        {
            u = 1 ;
            break ;
        }
        y = y / 10 ;
    }
    if ( t == 1 && u == 1)
    {
        printf("Not Lucky\n");
    }
    else 
    {
        printf("Lucky\n");
    }
    return 0;
}