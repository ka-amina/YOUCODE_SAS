//Challenge 9 : Suppression des Espaces
//�crivez un programme C qui lit une cha�ne de caract�res et supprime tous les espaces. Affichez la cha�ne r�sultante.


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
