#include <stdio.h>
#include <time.h>
#include <math.h>
//clock_t clock(void)  //tick count

int main(void)
{
  
	int a = 10, b = 20;

	double x;
	printf("Hesaplaniyor...");
	clock_t start = clock();
	for (int i = 0; i < 200'000'000; ++i)
		x = sqrt(pow(i, 6));
	clock_t end = clock();
	clock_t res = end - start;
	printf("%f seconds\n", (double)res / CLOCKS_PER_SEC);
}