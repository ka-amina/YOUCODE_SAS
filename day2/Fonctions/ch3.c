//Challenge 3 : Fonction de Maximum
//Écrivez une fonction en C qui prend deux entiers en paramètres et retourne le plus grand des deux.
//Créez un programme principal qui utilise cette fonction pour afficher le maximum entre deux nombres.

int Max(int a, int b){
 if(a>b) return a;
    return b;
}
int main(){
int Max(int, int);
int a,b,r;
printf("entrer 1er entier:\n");
scanf("%d", &a);
printf("entrer 2eme entier:\n");
scanf("%d", &b);
r=Max(a,b);
printf("Le plus grand nombre entre %d et %d est: %d\n", a, b, r);
}
