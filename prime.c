// wap to check wheathe given no is prime or not
#include <stdio.h>
#include <string.h>
int main (void){

int n, i,flag=0;
printf("Eneter the no tocheck it is prime no or nt");
scanf("%d",&n);
for(i=2;i<n;i++){
if(n%i == 0){
flag = 1;
break;

}


}
if(flag ==1){
    printf("number is not a prime number%d",n);
    
}
else{

    printf("numbe is prime =%d",n);
}






}
