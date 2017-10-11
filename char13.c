#include<stdio.h>
#include<string.h>
void main(){
char ch[100];
int n;
gets(ch);
n =strlen(ch)-1;
for(; n>=0;n--){
    printf("%c",ch[n]);
}
}
