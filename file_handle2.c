#include <stdio.h>
#include <stdlib.h>
int main (void){
  char ch;
  FILE *source, *target;
 source = fopen("f1.txt","r");
 target = fopen("f2.txt","w");
 while((ch = fgetc(source))!=EOF)
 {
    fputc(ch, target);
    

 }
 printf("file copiet succesfully !!");

fclose(source);
fclose(target);




}
