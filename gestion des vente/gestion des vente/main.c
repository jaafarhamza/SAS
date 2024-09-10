#include <stdio.h>
#include <stdlib.h>


int main()
{
    int nbr_produit , total_des_vente , i ;
    float montant_des_vente[nbr_produit] ;

    printf("entre les nombre des produit vendus dans la journee:");
    scanf("%d",&nbr_produit);

    total_des_vente=0;

    for(i=1 ; i<=nbr_produit ; i++){
        printf("entrez le montant de produit %d :",i);
        scanf("%f",&montant_des_vente);

         total_des_vente = total_des_vente + montant_des_vente[i];
    }

        printf("total_des_vente %d",total_des_vente);

    for(i=1 ; i<=nbr_produit ; i++){


    }







    return 0;
}
