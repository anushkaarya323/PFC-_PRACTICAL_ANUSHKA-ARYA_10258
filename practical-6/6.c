#include<stdio.h>
int main(){
    //ANUSHKA ARYA
    //ERP-10258
    int pin = 1234;
    int enteredPin;
    printf("Enter your ATM PIN :");
    scanf("%d",&enteredPin);
    if(enteredPin == pin){
        printf("Access Granted. Welcome!\n");
    }
    else{
        printf("Access Denied. Incorrect PIN.\n");
    }
    return 0;
}
// Enter your ATM PIN :1234
// Access Granted. Welcome!