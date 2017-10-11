#include<stdio.h>
#include<string.h>
void main(){
char ch[100];

printf("eneter the string to get output with space");
gets(ch);

puts(ch);
puts(strrev(ch));
}
