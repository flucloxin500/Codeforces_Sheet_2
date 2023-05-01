#include<stdio.h>
#include<math.h>
 
int  main (){
    
    int n , a , b , rem  ;
    int  sum2 = 0 , i ;
 
    scanf("%d%d%d",&n,&a,&b);   // 20  2  5
 
    for ( i = 1 ; i <= n ; i++)
    {
        int x = i , sum = 0  ;
        while ( x > 0)  /// i = 1  2  3  4  5  11
        {
            rem = x % 10 ; /// rem = 1  2  3  4  5  1  1
            sum += rem ;  /// sum = 2  
            x /= 10 ;
        }

        if ( sum >= a && sum <= b )   /// ..
        {
            sum2 += i ;  /// .. 2+3+4+5+11+12+13+14+20
        }
    }

    printf ( "%d\n" , sum2 ) ;
    return 0 ;
}
