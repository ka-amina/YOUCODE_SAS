//Challenge 9 : Calcul de la distance entre deux points dans un espace 3D

//Écrivez un programme C pour trouver la distance entre deux points donnés dans un espace 3D. Formule :

//Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)

#include<stdio.h>
#include<math.h>


int main() {
float x1,x2,y1,y2,z1,z2, Distance;
printf("entrer le donnes de la premier point: ");
scanf("%d%d%d", &x1, &y1, &z1);
printf("entrer le donnes de la deuxieme point: ");
scanf("%f%f%f", &x2, &y2, &z2);
Distance= sqrt(pow((x2-x1), 2)+ pow((y2-y1), 2)+ pow((z2-z1), 2));
printf("la distance entre les deux point est : %.2f", Distance);
}
