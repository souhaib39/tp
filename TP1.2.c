#include <stdio.h>
#include <stdlib.h>

int main(){
char arr[5][5]={{'1','2','3','4','5'},
                    {'7','a','c','8','d'},
                    {'c','9','4','z','8'},
                    {'5','6','p','n','3'},
                    {'2','9','t','m','k'}};

int item;
   for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
         printf("%c  ",arr[i][j]);
      }
    printf("\n");
   }
   for(int i=0;i<5;i++){
      for(int j=i+1;j<5;j++){
         item=arr[i][j];
         arr[i][j]=arr[j][i];
         arr[j][i]=item;
      }
   }

   printf("\n");
   for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
         printf("%c  ",arr[i][j]);
      }
    printf("\n");
   }
}
