#include <stdio.h>
#include <stdlib.h>
#include "utility.h"




int main()
{
    FILE *fs = fopen("tesla.txt", "r");
    if (fs == NULL)
    {
        printf("it was not opened test.txt");
        exit(EXIT_FAILURE);
    }

    FILE *fd = fopen("dest.txt", "w");
    if (fd == NULL)
    {
        printf("it was not opened dest.txt");
        exit(EXIT_FAILURE);
    }

    
    getCharacterCount(fs, fd);
    fclose(fs);
    fclose(fd);

    return 0;
}