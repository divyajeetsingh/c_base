#include <stdio.h>
#include <string.h>
int main (void){
    char name,ch[100];
    int i=0;

printf("Enter the string value if it is space or not so you can tre in c");
while (name !='\n'){
name = getchar();
ch[i] = name;
i++;
}
ch[i]= '\0';
printf("THE VALUE OF SRING %s",ch);
return 0;
}