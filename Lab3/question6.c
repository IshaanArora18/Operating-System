#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void handle_sigint(int sig)
{
    printf("Caught signal %d\n", sig);
    printf("Enter Ctrl+\\ to terminate the execution\n");
}

int main()
{
    signal(SIGINT, handle_sigint);
    /*Here handle_sigint() is a function which detects the command Ctrl+C and then prints Caught the signal and instructs the programmer to enter the command Ctrl+\ to termninate the process.*/
    while (1)
    {
        printf("I am executing!\n");
        sleep(2);
    }
    