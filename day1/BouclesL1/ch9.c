//Challenge 9 : Compteur de Chiffres
//Écrivez un programme C qui demande à l’utilisateur un entier positif et compte le nombre de chiffres dans cet entier.
//Par exemple, pour n = 12345, affichez : Nombre de chiffres = 5.
#include <stdio.h>

int main(){
int n, count,j;
printf("entrer un entier positif:");
scanf("%d", &n);
if (n <= 0) {
        printf("Veuillez entrer un entier positif.\n");
    }
while (n != 0) {
        n /= 10;
        count++;
    }
    printf("Nombre de chiffres = %d\n", count);
}
