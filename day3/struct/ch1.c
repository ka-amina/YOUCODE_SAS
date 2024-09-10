//Challenge 1 : Définition et Utilisation de Structure
//Écrivez un programme C qui définit une structure pour représenter une personne avec les champs nom, prenom, et age.
//Créez une variable de cette structure, assignez des valeurs aux champs, et affichez ces valeurs.

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
