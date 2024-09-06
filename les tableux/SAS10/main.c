#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
int main()

{
      int tableau[SIZE] = {1, 2, 3, 4, 5 ,8,10 ,9};  // Tableau d'origine

    // Inverser les éléments du tableau
    for (int i = 0; i < SIZE / 2; i++) {
        int temp = tableau[i];
        tableau[i] = tableau[SIZE - 1 - i];
        tableau[SIZE - 1 - i] = temp;
    }

    // Afficher le tableau inversé
    printf("Tableau inversé : ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    return 0;
}
