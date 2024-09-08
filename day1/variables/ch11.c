//Challenge 11 : Surface d'un rectangle

//Écrivez un programme pour trouver la surface d'un rectangle. Prenez la longueur et la largeur du rectangle en entrée de l'utilisateur. Formule pour la surface d'un rectangle :

//Surface = longueur * largeur
 #include<stdio.h>

 int main(){
 float Longeur, Largeur, Surface;
 printf("entrer la largeur de rectangle : ");
 scanf("%f", &Largeur);
 printf("entrer la longueur de rectangle : ");
 scanf("%f", &Longeur);
 Surface = Largeur * Longeur;
 printf("la surface de le rectangle est : %.2f", Surface);
 }
