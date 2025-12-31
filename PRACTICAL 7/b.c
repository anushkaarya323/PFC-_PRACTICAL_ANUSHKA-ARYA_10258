#include<stdio.h>
int main(){
    //ANUSHKA ARYA
    //ERP-10258
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=0;j<n-i;j++)printf(" ");
        for(j=1;j<=2*i-1;j++)printf("*");
        printf("\n");
    }
    for(i=2;i<=n;i++){
        for(j=0;j<n-i;j++)printf(" ");
        for(j=1;j<=2*i-1;j++)printf("*");
        printf("\n");
    }
    return 0;
}
// 5d "c:\Users\anush\OneDrive\Desktop\PRACTICAL C\PRACTICAL 7\" ; if ($?) { gcc b.c -o b } ; if ($?) { .\b }
// *********
//  *******
//   *****
//    ***
//     *
//    ***
//   *****
//  *******
// *********