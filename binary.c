#include <stdio.h>

int  binary_search(int arr[] , int item);
void main(){
int arr []  = {1,2,3,4,5,6,7,8,9,10};
int item, x;
printf("that item to find in the array list ");


scanf("%d",&item);
x  = binary_search(arr,item);

if (x== -1){
    printf("the element is not find");
}

else {
    printf("the element is found");
}
}

int binary_search(int arr[], int item){
int low = 0;
int high = 9;
int mid;
while(low<=high){

mid = (low +high)/2;
if(item >arr[mid]){

    low  =mid +1;
}
else if(item<arr[mid]){
  high = mid -1;


}
else{
    return mid;
}

}
return -1;

}
