#include <stdio.h>
#include <string.h>
void main(){
char ch[30],ch1[30];
printf("enter the string 1and 2");
gets(ch);
gets(ch1);
strcpy(ch,ch1);

printf("the copied string is%s \n",ch);

//we can also copy single entity in c
strcpy(ch, "google");



printf("\n");
printf("the copy are %s",ch);
}