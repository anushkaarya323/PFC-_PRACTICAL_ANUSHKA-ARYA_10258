#include<stdio.h>
int main(){
    // ANUSHKA ARYA
    // ERP-10258
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                printf("*");
            }
            printf("\n");
        }
        return 0;
}
// *
// **
// ***
// ****
// *****