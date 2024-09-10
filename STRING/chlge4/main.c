#include <stdio.h>
#include <stdlib.h>

int main()
{

    char text1[20] ;
    char text2[20] ;

    printf("entre une Caractères :");
    gets(text1);
    printf("entre une Caractères :");
    gets(text2);

    if (strcmp(text1,text2)==0)
        printf("indiquant");
    else
        printf("non indiquant");

    return 0;
}
