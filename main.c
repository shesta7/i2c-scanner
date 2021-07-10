#include <stdio.h>
#include <string.h>

#include "shell.h"
 
int main()
{
    char str[] = "Testqeeqweqeqeqeqe input";
    int res = ShellExecuteCommand(str);

    if(res == 1)
    {
        printf("\nerror in input");
    }
    return 0;
}