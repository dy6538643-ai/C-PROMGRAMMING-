\\write the program to find the frequency of particular number in a list of integer.

#include<stdio.h>
int main() {
    int n, i, count = 0, num;
    
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the list:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);
    
    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            count++;
        }
    }
    
    printf("The frequency of %d in the list is: %d\n", num, count);
    
    return 0;
}