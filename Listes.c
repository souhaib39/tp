#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int val;
    struct element *suivant;
} element;

element* creerListe() {
    return NULL;
}

element* chargerListe(int Tab[], int n, element *liste) {
    for (int i = 0; i < n; i++) {
        element* p = (element*)malloc(sizeof(element));
        p->val = Tab[i];
        p->suivant = NULL;

        if (liste == NULL) {
            liste = p;
        } else {
            element* q = liste;
            while (q->suivant != NULL) {
                q = q->suivant;
            }
            q->suivant = p;
        }
    }
    return liste;
}

void afficherListe(element *L) {
    element* q = L;
    while (q != NULL) {
        printf("%d  ", q->val);
        q = q->suivant;
    }
    printf("NULL \n");
}

element* supprimerEnFin(element *L){

     element *q = L,*tmp;
     while (q->suivant->suivant!= NULL) {
        q = q->suivant;
     }
    tmp = q->suivant;
    q->suivant = NULL;
    free(tmp);
  return L;
}
element* ajouterEnDebut(element* L1,int item){
  element* p = (element*)malloc(sizeof(element));
  p->val=item;
  p->suivant= L1;
  L1=p;
  return L1;
}

element* viderListe(element* L2){
     element *q = L2;
     element *tmp;
     L2=NULL;
     while (q!= NULL) {
        tmp = q;
        q = q->suivant;
        free(tmp);
     }
   return L2;
}

int main(){
int Tab[10]={1,3,5,7,8,10,9,11,13,20};
element*liste=creerListe();
element*L=chargerListe(Tab,10,liste);
afficherListe(L);
element* L1=supprimerEnFin(L);
afficherListe(L1);
element* L2=ajouterEnDebut(L1,40);
afficherListe(L2);
element* L3=viderListe(L2);
afficherListe(L3);
return 0;
}
