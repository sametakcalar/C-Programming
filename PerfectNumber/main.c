#include <stdio.h>
 
int isPerfectNumber(int num)
{
	int sum = 0;
	for (size_t i = 1; i <=num / 2; ++i)
		if (num % i == 0)
			sum += i;

	return !(sum == num);
}

int main(){

	for (size_t i =0;i<1000;++i)
		printf("number:%d %d\n",i,isPerfectNumber(i));

}