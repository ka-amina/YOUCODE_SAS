//Challenge 7 : Conversion en Majuscules
//Écrivez un programme C qui lit une chaîne de caractères et convertit tous les caractères en majuscules.
//Affichez la chaîne modifiée.

#include<stdio.h>

int main() {
char chaine_de_charachter[50];
int taille, i;
printf("entrer le text: ");
gets(chaine_de_charachter);
taille=strlen(chaine_de_charachter);
for(i=0; i<taille; i++){
    printf("%c", chaine_de_charachter[i]-32);
}
}
