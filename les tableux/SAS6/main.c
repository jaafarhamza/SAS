#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i ,m ,f, n;
    printf("entre les nombres des valeurs : \n" );
    scanf("%d" , &n);
    int T[n] ;
    for(i=0 ; i<n ; i++){

        printf("T[%d] :", i);
        scanf("%d" , &T[i]);
    }
    for(i=0 ; i<n ; i++)
        printf("%d \n" , T[i]);

    m = (T[i] * f);
    printf("entre le facture : \n");
    scanf("%d", &f);
    printf("le multiplication est :\n ");
        for(i=0 ; i<n ;i++){
            m = (T[i] * f);
            printf("%d * %d = %d \n", T[i] , f, m );
        }




    return 0;
}
