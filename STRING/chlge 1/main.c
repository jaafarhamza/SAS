#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 char text[] ;

int main()
{

   printf("entre une Caract�res :");
   scanf(" %[^\n]s",&text);

   printf("%s",text);



    return 0;
}
