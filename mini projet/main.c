#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s , i, somme1=0, somme2=0 ;
    printf("entre les size de tableaux : \n");
    scanf("%d",&s);

    printf("le tableux : \n");

    int T[s];
    for (i=1 ; i<=s ; i++){
        printf("T[%d] = ",i);
        scanf("%d",&T[i]);
    }
    for (i=1 ; i<=s ; i++){

        if (T[i]%5==0)
        somme1 = somme1 + T[i];

        else if (T[i]%3==0)
        somme2 = somme2 + T[i];


    }
        printf("la somme des nombre : %d ",somme2 + somme1);











    return 0;
}
