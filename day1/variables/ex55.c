#include <stdio.h>
int main(){
    int years, projects, salaire , new_salary;
printf("s'aisire les nombres d'annes:");
scanf("%d", &years);
printf("s'aisire les nombres des projets:");
scanf("%d", &projects);
printf("s'aisire votre salaire:");
scanf("%d", &salaire);
if (years>10 && projects>15){
    new_salary= sqlqire +  salaire*0.03;
    printf("votre bonus est: %d", new_salary);
}
else if (years>10 && 10<=projects<15){
    new_salary= salaire+1.2;
    printf("votre bonus est: %d", new_salary);
}
else{
   printf("vous n'avez pas de bonus");
}
}
