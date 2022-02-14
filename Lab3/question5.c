#include <stdio.h>
#include <dirent.h>

int main()
{
    struct dirent *pointerToTheDirectory;  // Pointer to the current directory
  
    // opendir() returns a pointer of DIR format ,which is stored by the direc pointer 
    DIR *direc = opendir(".");
  
    if (direc == NULL)  // opendir returns NULL if it fails to open the directory
    {
        printf("The directory does not contain anything" );
        return 0;
    }
    while ((pointerToTheDirectory = readdir(direc)) != NULL)
            printf("%s\n", pointerToTheDirectory->d_name);
  
    closedir(direc);   //Closing the opened direc pointer as a good programming practice

    return 0;
}