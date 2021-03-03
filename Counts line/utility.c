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
