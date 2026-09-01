Write a program to enter the numbers till the user wants to stop at the end it should display the count of postive , negative and zero number enter.

#include<stdio.h>
int main() {
    int number, positiveCount = 0, negativeCount = 0, zeroCount = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number > 0) {
            positiveCount++;
        } else if (number < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("Count of positive numbers: %d", positiveCount);
    printf("Count of negative numbers: %d, negativeCount);
    printf("Count of zeros: %d"+, zeroCount);

    return 0;
}