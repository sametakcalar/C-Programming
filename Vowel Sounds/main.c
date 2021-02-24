#include <stdio.h>
#include <ctype.h>

int numberOfVowel()
{
    int ch;
    int vowelCounter = 0;
    while ((ch = getchar()) != '\n')
    {
        switch (tolower(ch))
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                ++vowelCounter;
                break;
        default:
            break;
        }
    }
    return vowelCounter;
}

int numberOfVowel2(const char* str)
{
    int vowelCounter = 0;
    char vowels[] = { 'a','e','i','o','u' }; 
    for (int i = 0; str[i] != '\0'; ++i)
        for (int j = 0; j < 5; ++j)
            if (str[i] == vowels[j])
                ++vowelCounter;
   
    return vowelCounter;
}

int main(void) {
    
    int res2 = numberOfVowel2("samet akcalar");
    printf("res2=%d",res2);
   
    return 0;
}