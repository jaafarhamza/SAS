#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i ;
    printf("entre le size de tableux : ");
    scanf("%d", &n);

    int T[n] , Tinv[n];

    printf("entre le tableux :\n");
    for(i=0 ; i<n ;i++){
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
        for(i=0 ; i< n ; i++){
           Tinv[(n-i)-1]=T[i] ;
            }

        for(i=0 ; i<n ; i++)
        printf("%d \n" ,Tinv[i]);

    return 0;
}
