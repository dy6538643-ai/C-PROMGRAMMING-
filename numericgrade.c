// Write a program to convert a numeric grade (a, b, c, d, e, f) into remarks


#include<stdio.h>
int main()
 {
    char grade;
    printf("Enter the numeric grade (A, B, C, D, E, F): ");
    scanf(" %c", &grade);

    switch(grade) 
    {
    
        case 'A':
            printf("Excellent\n");
            break;
    
        case 'B':
            printf("Good\n");
            break;
    
        case 'C':
            printf("Average\n");
            break;
        case 'D':
            printf("Below Average\n");
            break;

        case 'E':
            printf("Poor\n");
            break;
     
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade entered\n");
    }

     return 0;
}