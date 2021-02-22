#include <stdio.h>

#define asize(a)   (sizeof(a)/sizeof(a[0]))

int* secondValinArray(const int* pa, size_t size)
{
	int *pmax =(int*)pa;
	int* psecond = (int*)pa + 1;

	if (*pmax < *psecond)
	{
		pmax = psecond;
		psecond = (int*)pa;
	}

	for (size_t i=2 ;i<size; ++i)
	{ 
		if (pa[i] > *pmax)    //seonc =5  pmax =8 
		{
			psecond = pmax;
			pmax = (int*)pa + i;
		}
		else if (pa[i] > *psecond)
			psecond =(int*) pa + i;
	}
	return psecond;
}

int main() 
{
	int ar[] = { 5,8,17,12,21 };
	int* psecond = secondValinArray(ar, asize(ar));
	printf("%d", *psecond);
}