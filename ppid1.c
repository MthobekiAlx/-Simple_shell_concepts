#include <stdio.h>
#include <windows.h>

int main()
{
    int a = 2;
    int b = 3;
    DWORD pid, ppid;
    int sum = a + b;

    pid = GetCurrentProcessId(); // Get the current process ID
    HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION, FALSE, pid);

    if (hProcess != NULL) {
        ppid = GetProcessId(GetParentProcess(hProcess)); // Get the Parent Process ID
        CloseHandle(hProcess);

        printf("my pid is %u\n", pid);
        printf("my ppid is %u\n", ppid);
        printf("my sum is %d\n", sum);
    } else {
        printf("Failed to open current process.\n");
    }

    return 0;
}

