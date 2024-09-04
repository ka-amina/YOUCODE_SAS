//Challenge 1 : Fonction de Somme
//Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur somme.
//Créez un programme principal qui utilise cette fonction pour afficher la somme de deux nombres.
int somme (int a, int b){
int s;
s=a+b;
return s;
}
int main(){
int somme(int, int);
int a,b,sum;
printf("entrer 1er entier:\n");
scanf("%d", &a);
printf("entrer 2eme entier:\n");
scanf("%d", &b);
sum=somme(a,b);
printf("%d + %d = %d", a, b, sum);
}
