#include <stdio.h>

extern void biggestOfThree();
extern void factorial();
extern void reverseString();

int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Find Biggest of Three Numbers\n");
        printf("2. Calculate Factorial\n");
        printf("3. Reverse a String\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                biggestOfThree();
                break;
            case 2:
                factorial();
                break;
            case 3:
                reverseString();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 4);

    return 0;
}

