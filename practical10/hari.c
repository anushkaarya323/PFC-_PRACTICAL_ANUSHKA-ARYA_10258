#include <stdio.h>

int main() {
    // ANUSHKA ARYA
    // ERP-10258
    int n, i;
    int arr[100];
    int max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
// output
// Enter number of elements: 5
// Enter 5 elements:2 3 5 7 8
// Maximum element = 8
// Minimum element = 2
