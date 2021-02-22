#include <stdio.h>
#include <limits.h>


int main()
{
	  
	int sum = 0;
	int c;

	printf("Please enter any number  my friend\n");

	while ((c = getchar()) != '\n')  
	{
		sum += c - '0';
	}
	
	if (sum % 9)
		printf("indivisible by 9...");
	else
		printf("divisible b 9..");
}





