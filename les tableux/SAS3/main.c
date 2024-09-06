#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , n , s;
    printf("entre les nombres des valeurs : \n" );
    scanf("%d" , &n);
    int T[n] ;
    for(i=0 ; i<n ; i++){

        printf("T[%d] :", i);
        scanf("%d" , &T[i]);
    }
    for(i=0 ; i<n ; i++)
        printf("%d \n" , T[i]);

    s=0;
    for(i=0 ; i<n ; i++)
        s=s+T[i];
        printf("la somme est : %d", s);
    return 0;
}
