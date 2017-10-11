
#include <stdio.h>
int main(){
int n,arr[10];
int i;
    printf("Enter th no to get reberse no that no");

scanf("%d",&n);

printf ("enter the elemetnt in aray");

for (i=0;i<n;i++){
    scanf("%d",&arr[i]);


}

for(i=n-1 ; i>=0;i--){
    printf("%d",arr[i]);
}


return 0;
}