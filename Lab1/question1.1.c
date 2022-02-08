#include <stdio.h>
#include <string.h>
int main()
{
    // Declaring the variables(num,ch,name) of types(int,character,character array)
    int num = 9;
    char ch = 'A';
    char name[7] = "Ishaan";
    // Pointer variables of the type(int,character,character array)
    int *ptr_num = &num;
    char *ptr_ch = &ch;
    char *ptr_name[7];
    for (int i = 0; i < strlen(name); i++)
    {
        ptr_name[i] = &name[i];
    }
    // Printing the addresses of the variables using %p format specifier
    printf("The address of num=%d->%p\n", num, ptr_num);
    printf("*********\n");
    printf("The address of ch=%c->%p\n", ch, ptr_ch);
    printf("*********\n");
    for (int i = 0; i < strlen(name); i++)
    {
        printf("The address of &name[%d]=%c->%p\n", i, name[i], ptr_name[i]);
    }
    return 0;
}