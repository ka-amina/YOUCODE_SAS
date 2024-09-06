//Challenge 6 : Fonction de Fibonacci
//Écrivez une fonction en C qui calcule le n-ième terme de la suite de Fibonacci.
//La fonction doit prendre un entier en paramètre et retourner le n-ième terme.
//Créez un programme principal qui utilise cette fonction pour afficher le terme de Fibonacci demandé.
//Fibonacci est définie comme suit : F(0) = 0, F(1) = 1, et F(n) = F(n-1) + F(n-2).

#include <stdio.h>

int Fibonacci(int n){
  if (n<=1)
    return n;
  else
   return Fibonacci(n-1)+Fibonacci(n-2);
}
int main() {
  int nbr;
  printf("entrer un nombre :");
  scanf("%d", &nbr);
  printf("F(%d)= %d", nbr, Fibonacci(nbr));
}
