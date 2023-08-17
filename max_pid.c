#include <stdio.h>
#include <stdint.h>

int main() {
    // Calculate the maximum PID value for a 64-bit system
    uint64_t max_pid = UINT64_MAX;

    // Print the calculated maximum PID value
    printf("Maximum PID value on a 64-bit system is: %lu\n", max_pid);

    return 0;
}
