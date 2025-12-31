#include<stdio.h>
int main(){
    //ANUSHKA ARYA
    // ERP-10258

    int n, i, j;
    int arr[10][10];
    int sum = 0;
    printf("Enter size of matrix: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        sum = sum + arr[i][i];
    }
    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}
// output
// Enter size of matrix: 3
// Enter the elements:1 2 3 4 5 6
// Sum of diagonal elements = 49