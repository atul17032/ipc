#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/wait.h>

// you can change the prototype of existing
// functions, add new routines, and global variables
// cheatmode, car1, car2, report are different processes
// they communicate with each other via pipes

// step-1
// ask user's if they want to cheat
// if yes, ask them if they want to relocate car1 or car2
// ask them the new location of car1/car2
// instruct car1/car2 to relocate to new position
// goto step-1
void cheatmode()
{
}

// step-1
// check if report wants me to terminate
// if yes, terminate
// sleep for a second
// generate a random number r between 0-10
// advance the current position by r steps
// check if cheat mode relocated me
// if yes set the current position to the new position
// send the current postion to report
// make sure that car1 and car2 generates a different
// random number
// goto step-1
void car1()
{
}

// step-1
// check if report wants me to terminate
// if yes, terminate
// sleep for a second
// generate a random number r between 0-10
// advance the current position by r steps
// check if cheat mode relocated me
// if yes set the current position to the new position
// send the current postion to report
// make sure that car1 and car2 generates a different
// random number
// goto step-1
void car2()
{
}

// step-1
// sleep for a second
// read the status of car1
// read the status of car2
// whoever completes a distance of 100 steps is decalared as winner
// if both cars complete 100 steps together then the match is tied
// if (any of the cars have completed 100 steps)
//    print the result of the match
//    ask cars to terminate themselves
//    kill cheatmode using kill system call
//    return to main if report is the main process
// else
// 	  print the status of car1 and car2
// goto step-1
void report()
{
}

// create pipes
// create all processes
// wait for all processes to terminate
int main()
{
	return 0;
}
