//write a program to convert binary to decimal in c
#include <stdio.h>
void main(){
    int n;
    int rem,d,dec=0;
printf("enter the binary no to convert it into dicimal");
scanf("%d",&n);
int j=1;
while(n>0){
//remainder 
rem = n%10;
d = rem *j;
dec = dec + d;
j *= 2;
n= n/10;





}
printf("the decimal no is%d ", n);

}