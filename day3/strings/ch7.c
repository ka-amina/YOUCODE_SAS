//Challenge 7 : Conversion en Majuscules
//�crivez un programme C qui lit une cha�ne de caract�res et convertit tous les caract�res en majuscules.
//Affichez la cha�ne modifi�e.

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
