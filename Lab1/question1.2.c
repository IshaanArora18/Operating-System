#include<stdio.h>
int main(){
    //Declaration of the numbers(num1,num2) and pointers(ptr1,ptr2) and the sum variable
    int num1, num2, *ptr1, *ptr2, sum;
   
   printf(" Input the first number : ");
   scanf("%d", &num1);
   printf(" Input the second  number : ");
   scanf("%d", &num2);   
 //Declararing the pointers to addresses of num1 and num2
   ptr1 = &num1;
   ptr2 = &num2;
 
   sum = *ptr1 + *ptr2;
 
   printf(" The sum of the entered numbers is : %d\n\n",sum);
 
   return 0;
}