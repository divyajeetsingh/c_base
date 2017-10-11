#include <stdio.h>

void main(){
//determine the largest and smallest no in arrry
int arr[100] = {1,24,45,5,34,6,3,56,4,4,55,21,36,64};
int  small, large,n=14;
small =large = arr[0];
for(int i=0 ; i<n; i++){
 if( arr[i]<small){
small =arr[i];

 }
 if(arr[i]>large){
     large =arr[i];

 }



}

printf("the small%d &&&& large %d", small , large );



}