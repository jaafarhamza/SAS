#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i ,max ,n;
    printf("entre les nombres des valeurs : \n" );
    scanf("%d" , &n);
    int T[n] ;
    for(i=0 ; i<n ; i++){

        printf("T[%d] :", i);
        scanf("%d" , &T[i]);
    }
    for(i=0 ; i<n ; i++)
        printf("%d \n" , T[i]);

    max = T[0];
        for(i=0 ; i<n ; i++){
            if (max < T[i])
                max = T[i];

        }
        printf("le max est : %d ", max);

    return 0;
}
