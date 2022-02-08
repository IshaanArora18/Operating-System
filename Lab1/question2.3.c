#include <stdio.h>
#include<stdlib.h>
int main()
{
    //Declaring file pointer variables(f1,f2,f3) and character vairable ch
    FILE *f1;
    FILE *f2;
    FILE *f3;
    char ch;
    //Opening the 3 text files in which text1.txt and text2.txt are in 'Reading mode' and text3.txt in 'Writing mode'
    f1 = fopen("text1.txt", "r");
    f2 = fopen("text2.txt", "r");
    f3 = fopen("text3.txt", "w");
    //Handling the file not found error
    if (f1 == NULL || f2 == NULL || f3 == NULL)
    {
        printf("ERROR");
        exit(1);
    }
    //Using while(1) so that when the text file reachs end the loop breaks
    while (1)
    {
        ch = fgetc(f1);
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, f3);
    }
    fclose(f1);
    while (1)
    {
        ch = fgetc(f2);
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, f3);
    }
    fclose(f2);
    fclose(f3);

    return 0;
}