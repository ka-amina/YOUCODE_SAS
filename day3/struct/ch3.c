//Challenge 3 : Passage de Structure en Argument
//�crivez un programme C qui d�finit une structure pour repr�senter un rectangle avec les champs longueur et largeur.
//�crivez une fonction qui prend une variable de cette structure en argument et calcule l'aire du rectangle. Affichez l'aire dans le programme principal.
#include <stdio.h>
#include<string.h>

struct rectangle{
    float longeur;
    float largeur;
};

float calculer_air(struct rectangle air){
  return air.longeur * air.largeur;
}

int main() {
struct rectangle air = {13.5, 10.5};
float area= calculer_air(air);
printf("l'air de le rectangle est:  %.2f\n", area);


}
