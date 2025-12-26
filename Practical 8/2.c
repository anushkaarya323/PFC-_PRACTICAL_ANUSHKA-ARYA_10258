#include<stdio.h>

// ANUSHKA ARYA
// ERP-10258
void swap(int *a,int *b){
    int main;
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("After swapping:\n");
    printf("x=%d,y=%d\n",x,y);
    return 0;
}
// After swapping:
// x=0,y=346