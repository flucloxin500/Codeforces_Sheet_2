#include<stdio.h>
int main()
{
    int i , n , x , j ;
    char w ;

    scanf("%c", &w);
    scanf("%d", &n);

    for ( i = 1 ; i <= n ; i++)
    {
        scanf("%d", &x);
        for ( j = 1 ; j <= x ; j++)
        {
            printf("%c",w);
        }

        printf("\n");
    }
    
    return 0;
}