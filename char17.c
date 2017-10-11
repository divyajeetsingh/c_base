//count the no of word in string 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
char ch[50] = "google is my  friends  v     are";
int n;
puts(ch);
n = strlen(ch)-1;
int i = 0;
int flag;
int count;
count= 0;
flag = 0;
while(i<n){
   if(ch[i]==' '){
       flag = 0;
   }
   else if(flag==0){
     flag = 1;
     count++;
   }
   i++;
}
printf("count %d",count);
}