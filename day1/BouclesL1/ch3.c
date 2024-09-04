//Challenge 3 : Somme des N Nombres
//Écrivez un programme C qui demande un nombre entier n à l’utilisateur et calcule la somme des n premiers nombres naturels.
//Par exemple, pour n = 4, la somme est 1 + 2 + 3 + 4 = 10.

#include<stdio.h>

int main(){
int n, i, Somme=0;
printf("ecriver un entier:");
scanf("%d", &n);
for (i=1; i<=n; i++){
    Somme = Somme+i ;
    if (i==1)
        printf("la somme est: %d", i);
    else
        printf("+%d", i);
}
printf("= %d", Somme);
}
