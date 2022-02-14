#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
void forkexample();
void forkexample()
{   pid_t pid, pid1, pid2;
    pid = fork();
    if (pid == 0)
    {
        pid1 = getpid();
        printf("Parent process ID is : %d using getpid()\n", pid1);
        pid2 = getppid();
        printf("Child Process with PPID is : %d using getppid()\n", pid2);

    }
    else{
    printf("The parent process ID is:%d found using fork()\n",pid);
}
}
    
int main()
{
    forkexample();
    return 0;
}