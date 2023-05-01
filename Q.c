#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){

    long long m , n , i , x , f=0 ;

    scanf("%lld", &n);

    for ( i = 0 ; i < n ; i++)
    {
        scanf("%lld", &m);
    }
    for ( i = n ; i >= 0 ; i--)
    {
        x = m;

        printf("%d ", x);

        
    }

    return 0 ;
}
