/*program to find quotient and remainder*/

#include <stdio.h>
int main(){
   int num1, num2, quot, rem;

   // 1st input
   printf("Enter dividend: ");
   scanf("%d", &num1);
   
   // 2nd input 
   printf("Enter divisor: ");
   scanf("%d", &num2);

   /* The "/" Arithmetic operator returns the quotient
    * Here the num1 is divided by num2 and the quotient
    * is assigned to the variable quot
    */
   quot = num1 / num2;

   /* The modulus operator "%" returns the remainder after
    * dividing num1 by num2.
    */
   rem = num1 % num2;

   printf("Quotient is: %d\n", quot);
   printf("Remainder is: %d", rem);

   return 0;
}
