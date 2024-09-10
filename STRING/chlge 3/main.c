#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{

    char text1[20] ;
    char text2[20] ;

    printf("entre une Caractères :");
    gets(text1);
    printf("entre une Caractères :");
    gets(text2);

    printf(("la chaîne résultante : %s "),strcat(strcat(text1, " "),text2));

    return 0;
}
