#include<stdio.h>
#include<string.h>
void main(){
char ch[100], temp;
int n,i=0;
    scanf("%s",&ch);
printf("%s",ch);
n  = strlen(ch)-1;
printf("%d",n);
//now right revers of string in c
while(i<n){
temp =ch[i];
ch[i] = ch[n];
ch[n] = temp;
i++;
n--;



}
printf ("%s",ch);
}