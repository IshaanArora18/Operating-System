#include <stdio.h>
#include <stdlib.h>
#define DATA_SIZE 1000
int main()
{
   //Declaring a character array that takes the string input from the user.
   char str[DATA_SIZE];
   FILE *fptr;
    printf("\n\n Create a file (testFile.txt) and input text :\n");
	printf("************************************************\n"); 
   //Opening the testFile.txt using the 'Writing mode'
   fptr=fopen("testFile.txt","w");	
   //Handling the file not found error
   if(fptr==NULL)
   {
      printf(" Error in opening file!");
      exit(1);
   }
   printf(" Input a sentence for the file : ");
   fgets(str, sizeof str, stdin);
   fprintf(fptr,"%s",str);
   fclose(fptr);
   printf("\n The file testFile.txt has been created successfully!\n\n");
   return 0;
}

