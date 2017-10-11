#include <stdio.h>
 int linear_search(int arr[], int n,int item);
void main(){
    int i,x,item,arr[40],n =10;
printf("Enter the no of element to find");
for(i=0;i<n;i++){

scanf("%d",&arr[i]);


}
printf("eneter the element to find in array");
 
scanf("%d",&item);
x  = linear_search(arr , n , item);

if(x==-1){
    printf("the item of element i not found %d", item);


}
else{


    printf("the element %d is found  at %d",item , i);
}

}
int linear_search(int arr[], int n , int item){
int i;
    for(i=0;i<n;i++){

    if(arr[i] == item)
        return i;
    
        
    
}
return -1;
}
