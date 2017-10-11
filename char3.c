
#include <stdio.h>
#include<string.h>
void main(){
    //making program to reverse of string in c
    char ch[50],*name;
    printf("enter the string in c");
    scanf("%s",&ch);
printf("the enter string is%s  \n", ch);
name = strrev(ch);

printf("the reverse string is %s",name);



}