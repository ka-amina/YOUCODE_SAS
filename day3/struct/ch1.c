//Challenge 1 : D�finition et Utilisation de Structure
//�crivez un programme C qui d�finit une structure pour repr�senter une personne avec les champs nom, prenom, et age.
//Cr�ez une variable de cette structure, assignez des valeurs aux champs, et affichez ces valeurs.

#include<stdio.h>
#include<string.h>

struct  information{
char nom[50];
char prenom[50];
int age;
};

int main() {

struct information personne={"Kara", "Amina", 23};

printf("Nom: %s\n", personne.nom);
printf("Prenom: %s\n", personne.prenom);
printf("Age: %d\n", personne.age);

}
