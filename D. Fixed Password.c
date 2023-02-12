
#include <stdio.h>

int main (){

    int n,i=0;

    while (1)
    {
        scanf("%d", &n);


        if ( n == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }

        i++;
    }



    return 0;
}

