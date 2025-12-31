#include<stdio.h>
int main(){
    // ANUSHKA ARYA
    // ERP-10258
    int n, i;
    int arr[100];
    int max, min;
    scanf("%d", &n);
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
// output-
// Maximum element = 1997544304
// Minimum element = -2
