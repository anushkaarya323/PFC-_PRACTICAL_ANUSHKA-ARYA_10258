#include <stdio.h>
int main() {
    //ANUSHKA ARYA
    //ERP-10258
    int rows, cols, i, j;
    int arr[10][10];
    int sum;
    scanf("%d %d", &rows, &cols);
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i = 0; i < rows; i++) {
        sum = 0;
        for(j = 0; j < cols; j++) {
            sum = sum + arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
// _output
// 1 2 3 
// 4 5 6
// Sum of row 1 = 7