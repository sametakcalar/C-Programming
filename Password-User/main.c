#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define   SAME		0

int main()
{

	char user_name[] = "SAMET";
	char password[] = "123456zA";


	char str[] = "usr=samet&psw=123456zA&set";
	char arr_str[5][12];
	char* temp;
	int i = 0;
	temp = strtok(str, "=&");

	while (temp != NULL)
	{
		
		strcpy(arr_str[i], temp);
		temp=  strtok(NULL, "=&");
		++i;
	}
		
	if (_stricmp(user_name, arr_str[1]) == SAME  && strcmp(arr_str[3] ,password) == SAME)
		printf("WELCOME");
	else
		printf("Fail");

}





