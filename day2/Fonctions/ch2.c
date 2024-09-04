//Challenge 2 : Fonction de Multiplication
//Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur produit.
//Créez un programme principal qui utilise cette fonction pour afficher le produit de deux nombres.

int times(int a, int b){
int T;
T= a*b;
return T;
}
int main(){
int T(int, int);
int a,b,t;
printf("entrer 1er entier:\n");
scanf("%d", &a);
printf("entrer 2eme entier:\n");
scanf("%d", &b);
t=times(a,b);
printf("%d * %d = %d", a, b, t);
}
