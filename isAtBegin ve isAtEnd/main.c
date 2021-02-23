
#include <stdio.h>
#include <string.h>

int isAtBegin(const char* s1, const char* s2)  
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	if (len2 > len1)
		return 1;
	if(strncmp(s1, s2, len2) == 0)
		return 0;

	return 1;
}
int isAtEnd(const char* s1, const char* s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	if (len2 > len1)
		return 1;
	if (strcmp(s1+len1 -len2, s2) == 0)
		return 0;

	return 1;
}

int main(void)
{
	printf("%d", isAtEnd("kocaeli", "eli"));
}