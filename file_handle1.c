#include <stdio.h>
#include <stdlib.h>
int main (void){
  char ch;
  FILE *fp;//this is used take value from secondary memory and paste the primary memory of ram 
  fp = fopen("f1.txt","r");
  while(!feof(fp)){
ch = fgetc(fp);
printf("%c",ch);



  }
fclose(fp);




}
