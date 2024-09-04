//Challenge 4 : Fonction de Minimum
//Écrivez une fonction en C qui prend deux entiers en paramètres et retourne le plus petit des deux.
//Créez un programme principal qui utilise cette fonction pour afficher le minimum entre deux nombres.

int min(int a, int b){
if (a<b) return a;
return b;
}
int main(){
int min(int, int);
int a, b, r;
printf("entrer 1er entier:\n");
scanf("%d", &a);
printf("entrer 2eme entier:\n");
scanf("%d", &b);
r=min(a,b);
printf("Le minimun entre %d et %d est: %d\n", a, b, r);
}
