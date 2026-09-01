 /* write the program to generate the   fibonacci series upto n terms.*/

 #include <stdio.h>
 int main() {
     int n, first = 0, second = 1, next, c;

     printf("Enter the number of terms in Fibonacci series: ");
     scanf("%d", &n);

     printf("Fibonacci Series: ");

     for (c = 0; c < n; c++) {
         if (c <= 1)
             next = c;
         else {
             next = first + second;
             first = second;
             second = next;
         }
         printf("%d ", next);
     }

     return 0;
 }