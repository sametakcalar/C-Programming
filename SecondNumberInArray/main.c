#include <stdio.h>

#define asize(a)   (sizeof(a)/sizeof(a[0]))

int secondValinArray(const int* pa, size_t size)
{
	int max = pa[0];
	int second = pa[1];

	if (max < second)
	{
		max = second;
		second = pa[0];
	}

	for (size_t i=2 ;i<size; ++i)
	{ 
		if (pa[i] > max)    //seonc =5  max =8 
		{
			second = max;
			max = pa[i];
		}
		else if (pa[i] > second)
			second = pa[i];
	}
	return second;
}

int main() 
{
	int ar[] = { 5,8,17,12,2 };
	printf("second %d", secondValinArray(ar, asize(ar)));
}