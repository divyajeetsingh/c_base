#include <stdio.h>

void main(){

int num,n,sum;
int cube, d;
    printf("----Generarting armstron no in c");
for(num =100; num<=999;num++){

n =  num;
sum  = 0 ; 
while(n>0){
   d= n%10;
   n = n/10;
   cube = d*d*d;
    sum = cube ;

}
if(num ==sum){

    printf("enter num is armtrong no %d",num);
}
}

}