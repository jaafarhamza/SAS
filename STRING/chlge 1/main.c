#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 char text[] ;

int main()
{

   printf("entre une Caractères :");
   scanf(" %[^\n]s",&text);

   printf("%s",text);



    return 0;
}
