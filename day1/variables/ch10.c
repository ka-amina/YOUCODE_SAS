//Challenge 10 : Volume d'une sphère

//Écrivez un programme pour trouver le volume d'une sphère. Prenez le rayon de la sphère en entrée de l'utilisateur. Formule pour le volume d'une sphère :

//Volume = (4/3) * π * r³

#include<stdio.h>
#include<math.h>

int main(){
float r, Volume;
float Pi=3.14;
printf("entrer le rayon: ");
scanf("%f", &r);
Volume=(4/3) * Pi * pow(r,3);
printf("le volume de sphere est : %.2f", Volume);
}
