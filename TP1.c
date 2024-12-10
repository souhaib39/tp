#include <stdio.h>
#include <stdlib.h>
int main(){

char matrice[5][5]={{'1','2','3','4','5'},
                    {'7','a','c','8','d'},
                    {'c','9','4','z','8'},
                    {'5','6','p','n','3'},
                    {'2','9','t','m','k'}};
   for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
         printf("%c  ",matrice[i][j]);
      }
    printf("\n");
   }
   printf("\n");
   for(int i=0;i<5;i+=2){
      for(int j=0;j<5;j++){
         printf("%c  ",matrice[i][j]);
      }
    printf("\n");
   }

   printf("\n");
   for(int i=0;i<5;i++){
      for(int j=1;j<5;j+=2){
         printf("%c  ",matrice[i][j]);
      }
    printf("\n");
   }

   printf("\n");
   for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
         if(i==j){
            printf("%c  ",matrice[i][j]);
         }else{
            printf("   ");
         }
      }
    printf("\n");
   }

   printf("\n");
   for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
         if(i+j==4){
            printf("%c  ",matrice[i][j]);
         }else{
            printf("   ");
         }
      }
    printf("\n");
   }











































return 0;
}
