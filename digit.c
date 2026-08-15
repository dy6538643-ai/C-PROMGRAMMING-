#include<stdio.h>
int main(){ 
    int n , middle;
    printf("Enter a three digit number");
    scanf("%d", &n);
    middle =(n/10)%10;
    printf("Middle digit=%d" , middle);
    return 0;
}