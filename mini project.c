#include <stdio.h>

int main() {
    //ANUSHKA ARYA
    //ERP-10258
    int mainChoice;

    do {
        printf("\n==============================\n");
        printf("      ALL-IN-ONE C TOOL       \n");
        printf("==============================\n");
        printf("1. Bitwise Utility Tool\n");
        printf("2. Time Conversion Tool\n");
        printf("3. Loop Optimization Demo\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &mainChoice);

        switch (mainChoice) {
            case 1: {
                int a, b, choice;
                printf("\nEnter two integers: ");
                scanf("%d %d", &a, &b);

                printf("\nBitwise Operations Menu:\n");
                printf("1. AND (&)\n");
                printf("2. OR (|)\n");
                printf("3. XOR (^)\n");
                printf("4. Left Shift (<<)\n");
                printf("5. Right Shift (>>)\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1: printf("Result: %d\n", a & b); break;
                    case 2: printf("Result: %d\n", a | b); break;
                    case 3: printf("Result: %d\n", a ^ b); break;
                    case 4: printf("Result: %d\n", a << b); break;
                    case 5: printf("Result: %d\n", a >> b); break;
                    default: printf("Invalid operation choice\n");
                }
                break;
            }
            case 2: {
                int totalSeconds, hours, minutes, seconds;

                printf("\nEnter total seconds: ");
                scanf("%d", &totalSeconds);

                hours = totalSeconds / 3600;
                minutes = (totalSeconds % 3600) / 60;
                seconds = totalSeconds % 60;

                printf("Formatted Time: %02d:%02d:%02d\n",
                       hours, minutes, seconds);
                break;
            }
            case 3: {
                int i, n, forCount = 0, whileCount = 0;

                printf("\nEnter number of iterations: ");
                scanf("%d", &n);
                for (i = 1; i <= n; i++) {
                    forCount++;
                }
                i = 1;
                while (i <= n) {
                    whileCount++;
                    i++;
                }

                printf("For loop iterations   : %d\n", forCount);
                printf("While loop iterations : %d\n", whileCount);
                break;
            }

            case 4:
                printf("\nExiting program. Thank you!\n");
                break;

            default:
                printf("\nInvalid main menu choice\n");
        }

    } while (mainChoice != 4);

    return 0;
}
