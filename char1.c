#include <stdio.h>
#include <string.h>
void main(){
    char name,ch[50];
    int i =0;

    while(name!= '\n'){
  name  = getchar();

  ch[i] = name;
  i++;


    }
ch[i] = '\0';
    printf("the  enter char by user is %s", ch);



}