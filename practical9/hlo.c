#include <stdio.h>

int main() {
    //ANUSHKA ARYA
    //ERP-10258
    int n, i;
    int arr[100];
    int sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }
   printf("Sum of even elements = %d\n", sum);
    return 0;
}
// Enter 10 elements:
// Sum of even elements = 1876565000
