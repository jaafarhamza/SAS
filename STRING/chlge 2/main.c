#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
         char text[100];

         printf("entre une Caract�res :");
         gets(text);

     int i=0 ;
     while (text[i] != '\0'){
            i++ ;
       }

        printf("%s \n",text);
        printf("le longueur est : %d \n",i);

         for (i = 0;i< text [i]; ++i) //Caract�res vertical
         printf("%c\n", text[i]);

    return 0;

}
