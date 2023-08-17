#include <stdio.h>
#include <unistd.h>

/*
 * main - ppid
 * Returns 0 on success and -1 on failure
 */

int main()
{
	ppid_t ppid;

	ppid = getppid(); //Prints the pararent pid
	printf("my ppid is %u\n", ppid);
	return 0;
}
