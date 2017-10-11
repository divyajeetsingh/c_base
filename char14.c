#include<stdio.h>
#include<string.h>
void main(){
//create a program deleting a string 
char ch[50]= "divyajeet singh is hacker";

char p[50];
int n = strlen(ch)-1;
int i=0;
int j=0;
char check[]= "a";

while(i<n){
if(ch[i]!=check[0]){
    p[j]=ch[i];
j++;

}
i++;


}
printf("the  deleting eleemnt in array is %s",p);

}
