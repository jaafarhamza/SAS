#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[5] ;
    int i ;

    printf("entre les 5 valeurs : \n");

    for(i=0 ; i<5 ; i++){

        printf("T[%d] :", i);
        scanf("%d" , &T[i]);
    }
    return 0;
}
