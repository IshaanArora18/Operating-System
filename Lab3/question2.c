#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
  char *binaryPath = "/bin/ls";
  char *binaryPath2 = "/bin/pstree";
  char *arg1 = "-s";
  char *arg2 = "-a";
  
  int pid = fork();
  if(pid == 0){
    execl(binaryPath2, binaryPath2, arg2, NULL);
  }
  else{
    execl(binaryPath, binaryPath, NULL);
  }
  return 0;
}