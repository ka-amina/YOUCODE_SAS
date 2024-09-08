//Challenge 3 : Concaténation de Chaînes
//Écrivez un programme C qui lit deux chaînes de caractères et les concatène en une seule chaîne.
//Affichez la chaîne résultante.

#include<stdio.h>
#include<string.h>

int main() {
char ch1[50], ch2[50], concatener[100];
printf("Entrer la premier chaine de charachter: ");
scanf("%[^\n]s", ch1);
printf("Entrez la deuxième chaîne de caractères: ");
scanf(" %[^\n]", ch2);
strcpy(concatener, ch1);
strcat(concatener, " ");
strcat(concatener, ch2);
printf ("votre chaine de charachtere est : %s", concatener);
}
