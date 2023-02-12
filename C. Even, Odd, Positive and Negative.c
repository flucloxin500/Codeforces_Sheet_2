#include <stdio.h>

int main (){

    int n,i,x,a=0,b=0,c=0,d=0;
    scanf("%d", &n);

    for (i = 1 ; i <= n ; i++)
    {
        scanf("%d",&x);

        if ( x % 2 == 0 || x == 0)
        {
            a++;
        }
        if ( x % 2 != 0)
        {
            b++;
        }
        if ( x > 0)
        {
            c++;
        }
        if ( x < 0)
        {
            d++;
        }

    }
    printf("Even: %d\n", a);
    printf("Odd: %d\n", b);
    printf("Positive: %d\n", c);
    printf("Negative: %d\n", d);

    return 0;
}

