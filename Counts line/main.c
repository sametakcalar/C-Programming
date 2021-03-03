#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int getLineCounter(FILE* f)
{
    int counter = 1;
    int ch;
    while ((ch = fgetc(f)) != EOF)  //samet akcalar
        if (ch == '\n')
            ++counter;

    return counter;
}

int main()
{
    FILE *fp =fopen("tesla.txt", "r");
    if (fp == NULL)
    {
        printf("it was not opened file");
        exit(EXIT_FAILURE);
    }
    printf("Total Words:%d", getLineCounter(fp));
    
    fclose(fp);
    return 0;
}