//Challenge 9 : Suppression des Espaces
//Écrivez un programme C qui lit une chaîne de caractères et supprime tous les espaces. Affichez la chaîne résultante.


#include<stdio.h>
#include<string.h>

int main() {
int taille, i, j=0;
char chaine_de_charachter[100];
printf("entrer le text: ");
gets(chaine_de_charachter);
taille=strlen(chaine_de_charachter);
for(i=0; i<taille; i++){
    if (chaine_de_charachter[i]=' ')
        chaine_de_charachter[j] = chaine_de_charachter[i];
    j++;
}
chaine_de_charachter[j] ='\0';
printf("after removing: %s", chaine_de_charachter);
}
