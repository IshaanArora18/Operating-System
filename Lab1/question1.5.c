#include<stdio.h>
#define MAX_LIMIT 100000
int main(){
    printf(" \nEnter the string:\n");
    //Declaring the character array for taking the input as string
    char input[MAX_LIMIT];
    //The fgets function written below accepts the string entered by the user including the spaces in between words 
    fgets(input, MAX_LIMIT, stdin);
    //Pointer declaration(char)
    char *ptr;
    ptr=&input[0];
    //Variable count is used to measure the string length
    int count=-1;
    int i=0;
    while(*(ptr+i)!='\0'){
        count++;
        i++;
    }
    printf("The length of the string is->%d",count);
return 0;
}