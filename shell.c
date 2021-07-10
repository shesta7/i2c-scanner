#include "shell.h"
#define MAX_COMMAND_LENGTH 8

int ShellInit()
{

}

int ShellExecuteCommand(char command[])
{    
    char commandTokens[3][MAX_COMMAND_LENGTH];

    char *pch = strtok(command, " ");
    int i = 0;

    while (pch != NULL) //пока есть лексемы
    {
        if(strlen(pch)>MAX_COMMAND_LENGTH)
            return 1;

        strcpy(commandTokens[i], pch);
        pch = strtok(NULL, " ");
        i++;
    }


    #ifdef DEBUG
    for(int j=0; j< i;j++)
    {
        printf("token: %s\n\n", commandTokens[j]);
    }
    #endif
    
    return 0;
}
