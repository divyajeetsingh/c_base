#include<stdio.h>
int linear_search(int arr[], int n, int item);
void main(){

    int item;
    printf("enter the item which is find in arrray");
    scanf("%d",&item);
    int arr[100] = {0,1,2,3,4,5,6,7,8,9,10};

    int n = 10;
    int x;

    x == linear_search(arr, n, item);

if(x== -1){
    printf("the eleement is not found");

    
}
else{
    printf("element is found in system");
}




}
int linear_search(int arr[], int n, int item){
int i = 0;
for(; i<n ; i++){
if (arr[i]==item){
    return i;
}

}
return -1;



}