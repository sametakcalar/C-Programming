#include "utility.h"
#include <stddef.h>

void printBits(unsigned int val)
{
	unsigned int mask = 1 << 31;

	size_t i;
	for (i = 1; i <= 32; ++i)
	{
		putchar(val & mask ? '1' : '0');
		val <<= 1;

		if (i % 8 == 0)
			putchar('\t');
	}

}





int gCharacterCounts[26] = { 0 };

PRIVATE void writeFileCharcCount(FILE* fd)
{
    for (int i = 0; i < 26; ++i)
        if (gCharacterCounts[i])
            fprintf(fd, "%c %d\n", 'a' + i, gCharacterCounts[i]);
}

void getCharacterCount(FILE* fs, FILE* fd)
{
    //A---> 0  B-->1  C--->2  .....
    int ch;
    while ((ch = fgetc(fs)) != EOF)
        if (isalpha(ch))
            ++gCharacterCounts[tolower(ch) - 'a'];

    writeFileCharcCount(fd);


}

