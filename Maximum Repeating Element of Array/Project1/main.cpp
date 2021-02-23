#include <stdio.h>
#include "utility.h"

void getMaxCountValinArray(const int* pa, size_t size, int* maxVal, int* maxValCount)
{
	int counter = 0;
	*maxValCount = 0;
	size_t i, j;
	for (i = 0; i < size; ++i) 
	{
		counter = 1;
		for (j = i + 1; j < size; ++j) 
		{
			if (pa[j] == pa[i])
				++counter;
			if (counter > *maxValCount)
			{
				*maxValCount = counter;
				*maxVal = pa[j];
			}
		}
	}

}



int main(void)  // i =4
{
	int a[] = { 5,3,4,1,2,1,9,3,4,2,3,8,3,10,4,4,4};
	int maxVal, maxCount;
	getMaxCountValinArray(a, asize(a), &maxVal, &maxCount);
	printf("maxVal:%d maxCount:%d", maxVal, maxCount);
	
	return 0;
}