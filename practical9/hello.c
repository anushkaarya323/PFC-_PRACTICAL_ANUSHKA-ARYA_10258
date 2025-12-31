#include<stdio.h>
int main(){
    // ANUSHKA ARYA
    // ERP-10258
    int arr[5]={1,2,3,4,5};
    int i,temp;
   for(i=0;i<5/2;i++){
    temp=arr[i];
    arr[i]=arr[4-i];
    arr[4-i]=temp;
   } 
   for(i=0;i<5;i++){
    printf("%d ",arr[i]);
   }
   return 0;
}
// output
// 5 4 3 2 1 