#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i ,j,repl, n;
    printf("entre les nombres des valeurs : \n" );
    scanf("%d" , &n);
    int T[n] ;

    for(i=0 ; i<n ; i++){

        printf("T[%d] :", i);
        scanf("%d" , &T[i]);
    }
    for(i=0 ; i<n ; i++)
        printf("%d \n" , T[i]);

    for(i=0 ; i<n ; i++){
        for(j=i+1 ; j<n ; j++){
            if (T[i]>T[j]){
                repl = T[i];
                T[i] = T[j];
                T[j] = repl ;
            }
        }

    }

        printf("les nombre croissant est : \n");
         for(i=0 ; i<n ; i++)
             printf("%d \n",T[i]);

    return 0;
}
