#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{

    char text1[20] ;
    char text2[20] ;

    printf("entre une Caract�res :");
    gets(text1);
    printf("entre une Caract�res :");
    gets(text2);

    printf(("la cha�ne r�sultante : %s "),strcat(strcat(text1, " "),text2));

    return 0;
}
