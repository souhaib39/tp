#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Etudiant {
  int Mat;
  char Nom[20];
  int Moy;
}Etudiant;

typedef struct Liste {
  Etudiant student;
  struct Liste *suivant;
}Liste;

void CréerListe(Liste *liste){
   liste->suivant=NULL;
}

int VideListe(Liste *liste){ return liste->suivant==NULL;}

void AfficherListe(Liste *liste){
    if(liste!=NULL){
      Liste *valeur=liste;
      while(valeur!=NULL){
         printf("Mat:%d ",valeur->student.Mat);
         printf("Nom:%s ",valeur->student.Nom);
         printf("Moy:%d ",valeur->student.Moy);
         valeur=valeur->suivant;
      }
    }
}

void AjouterEtudiant(Liste *liste,Etudiant etudiant){

   Liste *New=(Liste*)malloc(sizeof(Liste));
   New->student.Mat=etudiant.Mat;
   strcpy(New->student.Nom,etudiant.Nom);
   New->student.Moy=etudiant.Moy;

   if(VideListe(liste)){
      New->suivant=NULL;
      liste->suivant=New;
   }

}
int main(){
Liste L;
Etudiant etudiant1;
etudiant1.Mat=01;
etudiant1.Moy=18;
Etudiant etudiant2;
etudiant2.Mat=02;
etudiant2.Moy=19;
Etudiant etudiant3;
etudiant3.Mat=03;
etudiant3.Moy=20;
CréerListe(&L);
AjouterEtudiant(&L,etudiant1);
AjouterEtudiant(&L,etudiant2);
AjouterEtudiant(&L,etudiant3);
AfficherListe(&L);
return 0;
}
