#include<stdio.h>
int main()
{
    int a , b , A ,B , rem ;
    scanf("%d %d", &a,&b);
    A=a;
    B=b;
    while (B!=0){
        rem=A%B;
        A=B;
        B=rem;
    }
    printf("%d",A);
    return 0;
}