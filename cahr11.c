#include<stdio.h>
#include<string.h>
void main(){
    //using strncat  this is used to limti to concat the sting
    char str[]= "india";
    char str2[] = "man";
    strncat(str,str2,1);
    printf("the concat is %s",str);

}
