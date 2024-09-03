//Challenge 1 : Initialisation et Affichage
//Écrivez un programme C qui initialise un tableau d'entiers avec des valeurs données et affiche ces valeurs.
// Par exemple, vous pouvez initialiser un tableau avec les valeurs [1, 2, 3, 4, 5] et afficher chaque valeur sur une nouvelle ligne.
#include <stdio.h>

int main(void)
{
    int tab[5] = { 5, 4, 3, 2, 1 }, i;
for (i=0; i<5; i++){
        printf("%d\n", tab[i]);
    }
}
