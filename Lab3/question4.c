#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
void printHeirarchy(){
pid_t pid1,pid2;
   pid1=fork();
   pid2=fork();
   if(pid1>0 && pid2>0){
   printf("I am the parent process who sits at the top of the hierarchy\n");
   printf("My process id is %d\n",getpid());
   }
   else if(pid1>0 && pid2==0){
    printf("I am the child process resulted from the second fork() command through the fork command initiated by the root process\n");
       printf("My process id is %d\n",getpid());
   }
   else if(pid1==0 &&pid2>0){
   printf(" I am the child process from the first fork who is the parent process for the second fork() command\n");
      printf("My process id is %d\n",getpid());
   }
   else if(pid1==0 && pid2==0){
   printf("I amd the child process from the second fork() which got generated from the fork command used on the child process created in the first fork()\n");
      printf("My process id is %d\n",getpid());
}
   

}

int main(){
  printHeirarchy();
  return 0;

}