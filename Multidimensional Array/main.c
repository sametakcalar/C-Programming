#include <stdio.h>
#include <stdlib.h>


int* gdptr;


void setMatrix3X5(int(*p)[5], size_t size)
{
	for (size_t i = 0; i < size; ++i)	
		for (size_t j = 0; j < 5; ++j)	
			p[i][j] = rand() % 100;
}
void printMatrix3X5(const int(*p)[5], size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		for (size_t j = 0; j < 5; ++j)
			printf("%2d ", p[i][j]);
		printf("\n");
	}
}

int* getWaiterWekkTip(const int(*p)[5], size_t size)
{
	int sum;
	gdptr=(int*)malloc(size * sizeof(size));
	for (size_t i = 0; i < size; ++i)
	{
		sum = 0;
		for (size_t j = 0; j < 5; ++j)
			sum += p[i][j];
		
		*(gdptr + i) = sum;
	}
	return gdptr;
}

const char* const pdays[] = { "Monday","Tueday","Wednesday","Thursday","Friday" };

const char* getMaxTip(const int(*p)[5], size_t size, int* waiter, int* maxTip)
{
	const char* maxTipDay = pdays[0];
	*maxTip = p[0][0];
	*waiter = 0;

	for (size_t i = 0; i < size; ++i)   //waiter
		for (size_t j = 0; j < 5; ++j) //days
		{
			if (p[i][j] > *maxTip)
			{
				*maxTip = p[i][j];
				*waiter = i;
				maxTipDay = pdays[j];
			}
		}
	(*waiter)++;
	return maxTipDay;
}








int main(void) 
{
	int a[3][5];
	setMatrix3X5(a, 3);
	printMatrix3X5(a, 3);
	int* ptr = getWaiterWekkTip(a, 3);
	
	for (size_t i = 0; i < 3; ++i)
		printf("%2d.Waiter Tip=%d\n", i+1, ptr[i]);
	free(gdptr);
	
	int waiter, maxTip;
	const char *day = getMaxTip(a, 3, &waiter, &maxTip);
	puts(day);
	printf("%d.Waiter MaxTip=%d", waiter, maxTip);
	
}