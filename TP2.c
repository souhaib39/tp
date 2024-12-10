#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char *ChargerChaine(int N);
int Longueur(char *ch);
void InverserTab(char Tab[], char T[], int m);
void ChargerTab(char *p, char Tab[]);
void AfficherTab(char Tab[], int m);
int main(){
  char *ch;
  int n;
  printf("veuillez saisir la taille maximale de la chaine:\n");
  scanf("%d",&n);
  ch=ChargerChaine(n);
  int m=Longueur(ch);
  char Tab[m], T[m];
  ChargerTab(ch,Tab);
  AfficherTab(Tab,m);
  printf("\n");
  InverserTab(Tab,T,m);
  AfficherTab(T,m);
  free(ch);

return 0;
}

char *ChargerChaine(int N){
  char *value=malloc(N*sizeof(char));
  printf("Entrez une chaine de %d caracteres: ",N);
  scanf("%s",value);
  return value;
}

int Longueur(char *ch){
int count=0;
   for(int i=0;ch[i]!='\0';i++)
      count++;

   return count;
}
void ChargerTab(char *p,char Tab[]){
   for(int i=0;p[i]!='\0';i++)
      Tab[i]=p[i];
}
void AfficherTab(char Tab[],int m){
     for(int i=0;i<m;i++)
        printf("Tab[%d]=%c\n ",i,Tab[i]);

}
void InverserTab(char Tab[], char T[], int m){
   for(int i=0,j=m-1;i<j;i++,j--){
      T[i]=Tab[j];
      T[j]=Tab[i];
   }
}
