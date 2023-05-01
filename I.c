#include<stdio.h>
int main (){
 
    int x , rem, sum = 0 , temp  ;
    scanf("%d", & x);
 
    temp = x ;
 
    while ( temp != 0 )
    {
        rem = temp % 10 ;
        sum = sum * 10 + rem ;
        temp = temp / 10 ;
    }
 
    if ( x == sum)
    {
       printf("%d\nYES", sum); 
    }
    else
    {
        printf("%d\nNO", sum);
    }
    return 0 ;
}