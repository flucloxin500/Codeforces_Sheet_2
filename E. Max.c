
#include <stdio.h>

int main (){

    int n,i,x,mx = -2;
    scanf("%d", &n);

    for ( i = 1; i <= n ; i++)
    {
        scanf("%d", &x);

        if ( x > mx)
        {
            mx = x;

        }

    }
    printf("%d", mx);

    return 0;
}

