#include <stdio.h>
#include <unistd.h>

// main - ppid
// return: always 0.

int main()
{
	int a = 2;
	int b = 3;
	pid_t pid;
	
	int sum = a +b;

	pid = getpid();
	printf("my pid is %u\n", pid);
	printf("my sum is %d\n", sum);
	return 0;
}
