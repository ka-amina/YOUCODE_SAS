//Challenge 2 : Structure avec Tableau
//�crivez un programme C qui d�finit une structure pour repr�senter un �tudiant avec les champs nom, prenom, et un tableau d'entiers pour stocker les notes.
//Assignez des valeurs aux champs et aux notes, puis affichez les informations de l'�tudiant.
#include<stdio.h>
#include<string.h>

struct etudiants{
char nom[50];
char prenom[50];
int notes[8];
};


int main() {
struct etudiants etudiant= {"FIlali", "ahmed",{12,11,15,19,18,7,15,9}};
printf("Nom: %s\n", etudiant.nom);
printf("Pr�nom: %s\n", etudiant.prenom);
printf("Notes: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", etudiant.notes[i]);
    }
    printf("\n");
}
