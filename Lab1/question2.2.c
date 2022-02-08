#include <stdio.h>
#include <stdlib.h>

void main()
{
    // Declaring file pointer variable
    FILE *fptr;
    // Declaring character variable(ch) and integer variable (wrd,charcter)
    char ch;
    int wrd = 1, charctr = 1;
    // Declaring the string variable fname(filename) in the format of character array
    char fname[20];
    printf(" Enter the filename : ");
    scanf("%s", fname);
    // Assigning the input file to the pointer file and in the 'Reading format'(r)
    fptr = fopen(fname, "r");
    //Handling the error of file not existing in the current directory
    if (fptr == NULL)
    {
        printf(" File does not exist or can not be opened.");
    }
    else
    {
        ch = fgetc(fptr);
        printf(" The content of the file %s are : ", fname);
        while (ch != EOF)
        {
            printf("%c", ch);
            if (ch == ' ' || ch == '\n')
            {
                wrd++;
            }
            else
            {
                charctr++;
            }
            ch = fgetc(fptr);
        }
        printf("\n The number of words in the  file %s are : %d\n", fname, wrd - 2);
        printf(" The number of characters in the  file %s are : %d\n\n", fname, charctr - 1);
    }
    fclose(fptr);
}
