#include <stdio.h>
void main()
{//Declaring the variable n(array size) and temp(temproary variable)
    int tmp, n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    //Declaring thr a(array) and pointer variable (ptr)
    int a[n],*ptr = a;

    printf("Enter %d elements in the array : \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                tmp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = tmp;
            }
        }
    }
    printf("\n The elements in the array after sorting : \n");
    for (i = 0; i < n; i++)
    {
        printf(" element - %d : %d \n", i + 1, *(ptr + i));
    }
    printf("\n");
}
