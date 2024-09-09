#include <stdio.h>
#include <stdlib.h>


struct adresse {
       char country[10];
       char ville[10];
};

struct date {
       int year[4] ;
       char mois[10] ;
       int jour[2];

};
struct fiche {
       char name[40] , lastName[40] , email[40] , password[40] ;
       struct date naissanse;
       struct adresse  ;
};
int main()
{
    struct fiche f1;
    printf("entre le name : ");
    scanf("%s",&f1.name);
    printf("entre le lastName : ");
    scanf("%s",&f1.lastName);
    printf("entre le email : ");
    scanf("%s",&f1.email);
    printf("entre le password : ");
    scanf("%s",&f1.password);
    printf("entre le year : ");
    scanf("%s",&f1.naissanse.year);
    printf("entre le mois : ");
    scanf("%s",&f1.naissanse.mois);
    printf("entre le jour : ");
    scanf("%s",&f1.naissanse.jour);





    return 0;
}
