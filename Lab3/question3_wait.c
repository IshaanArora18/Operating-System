#include <stdio.h>
#include<stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
void useWait(void);
void useWait(void){
 pid_t pid;
 //fork()==0 only for the child process
    if(fork() == 0){
      exit(0);//Terminates the child process.
      printf("The child process is being executed\n");
    }
    else{
      //wait() returns the process id of the process that has terminated recently
      pid = wait(NULL);
      printf("Parent's Process id : %d\n", getpid());
      printf("Child's Process id which got terminated just now is : %d\n", pid);
    }
}
int main(void) {
    useWait();
    return 0;
}