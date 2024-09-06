#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("entre taille de tableux : \n");
    scanf("%d" , &n);

    int i ;
    int TO[n], TC[n];

    for(i=0 ; i<n ; i++){
        printf("TO[%d] = ", i);
        scanf("%d" , &TO[i]);
    }
    printf("le TC est : \n");

    for(i=0 ; i<n ; i++){
       TC[i] = TO[i] ;
       printf("TC[%d] = %d \n" ,i, TC[i]);

    }
    return 0;
}
