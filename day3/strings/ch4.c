//Challenge 4 : Comparaison de Chaînes
//Écrivez un programme C qui lit deux chaînes de caractères et compare si elles sont égales ou non.
//Affichez un message indiquant si les chaînes sont égales ou différentes.
#include<stdio.h>
#include<string.h>

int main() {
char ch1[50], ch2[50];
printf("Entrer la premier chaine de charachter: ");
scanf("%[^\n]s", ch1);
printf("Entrez la deuxieme chaine de caracteres: ");
scanf(" %[^\n]s", ch2);
if (strcmp(ch1,ch2) == 0){
    printf ("les deux chaines de caracteres sont egeaux ");
}else{
printf("les deux chaines ne sont pas egaux");
}
}
