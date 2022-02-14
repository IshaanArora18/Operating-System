#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>
void useSleep(void);
void useSleep(void){
    pid_t pid=fork();
    int counter= 5;
if(pid== 0){
//Here the sleep method makes the child process sleep for 10 seconds.
        sleep(10);
        for(int i = 0; i < 10; i++){
            printf("Parent process does %dx%d=%d\n",counter,i,counter*i);
        }
        printf("Child process pid = %d\n", getpid());
    }
    else{
    printf("\n");
        for(int i = 0; i < 10; i++){
          printf("Parent process does %dx%d=%d\n",counter,i,counter*i);
        }
        printf("Parent process pid = %d\n", getpid());
        
    }
}
int main(void) {
 
    useSleep();
    return 0;
}