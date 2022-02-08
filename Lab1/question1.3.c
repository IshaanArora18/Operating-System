#include <stdio.h>
#include <stdlib.h>
void main()
{
    // Declaring the numbers(num1,num2) and the pointers(ptr1,ptr2)
    int num1, num2, *ptr1 = &num1, *ptr2 = &num2;

    printf(" Enter the first number : ");
    scanf("%d", ptr1);
    printf(" Enter the second  number : ");
    scanf("%d", ptr2);

    if (*ptr1 > *ptr2)
    {
        printf("\n%d is the maximum number.\n\n", *ptr1);
    }
    else
    {
        printf("\n%d is the maximum number.\n\n", *ptr2);
    }
    return 0;
}
