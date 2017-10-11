#include<stdio.h>
#include<string.h>
void main(){
//take to  string to comapre the value in c
char str[10], str1[10];
gets(str);
gets(str1);
if((strcmp(str,str1))==0){
    printf("the string are same");

}
else {
    printf("string is not match");
    
}
}
