
#include <stdio.h>
#include<string.h>
void main(){
    //making program to reverse of string in c
    char temp, ch[50];
    int n,i=0;
    printf ("enter the character to reverse of that string in c");

    gets(ch);
    printf("%s",ch);
n= strlen(ch)-1;

while(i<n){
temp = ch[i];
ch[i] =ch[n];
ch[n] = temp;
i++;
n--;


}


printf("%s",ch);
}