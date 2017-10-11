#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
//pointer manupulation in c
char *str;
str  = (char *)malloc(10);
printf("Enter the string: ");
scanf("%s",str);
printf("the string is= %s", str);
}
 