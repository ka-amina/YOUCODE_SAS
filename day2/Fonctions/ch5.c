//Challenge 5 : Fonction de Factorielle
//Écrivez une fonction en C qui calcule la factorielle d'un entier positif.
//La fonction doit prendre un entier en paramètre et retourner sa factorielle.
//Créez un programme principal qui utilise cette fonction pour afficher la factorielle d'un nombre donné.

int factorielle (int n){
if (n==0 || n==1){
    return 1;
}
return n*factorielle (n-1);
}
int main(){
int n, f;
printf("entrer un nombre: ");
scanf("%d", &n);
f=factorielle(n);
printf("le factoriel de %d est : %d! = %d ", n, n, f);
return 0;
}
