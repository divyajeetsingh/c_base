#include<stdio.h>
#include<math.h>
int binary_search(int arr[], int item);
void main(){

//binary search
int arr[10] = {0,1,2,43,54,3,53,3,333,32};

printf("enter the item which is find in binary search of");
int item;
scanf("%d", &item);
int x;
x= binary_search(arr , item);

if(x==-1){
    printf("the enter element is not found in array");

}

else {
    printf("the elemen i found in arrya");
}

}

int binary_search(int arr[] , int item){
int low =0;
int high= 9;
int mid;

while(low<=high){
    mid = (low + high)/2;
 if(item>arr[mid]){
     low = mid+1;
 }
 else if(item <arr[mid]){
high = mid-1;

 }
else{
    return mid;
}
}

return -1;

}
