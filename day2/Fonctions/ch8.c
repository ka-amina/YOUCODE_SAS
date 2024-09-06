//Challenge 8 : Fonction de Vérification de Parité
//Écrivez une fonction en C qui vérifie si un entier est pair ou impair.
//La fonction doit prendre un entier en paramètre et retourner 1 si l'entier est pair et 0 s'il est impair.
//Créez un programme principal qui utilise cette fonction pour afficher si un nombre est pair ou impair.

int derivative(int n){
return (n%2 == 0)? 1 : 0;
}
int main(){
 int nbr;
 printf("Entrer un nembre:");
 scanf("%d", &nbr);
int s;
s=derivative(nbr);
if (s==0){
    printf("impair");
}else {
printf("pair");
}
}
