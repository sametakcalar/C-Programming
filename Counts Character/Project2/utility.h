#pragma once
#include <stdio.h>
#include <ctype.h>
#define PRIVATE static

#define asize(a)	(sizeof(a)/sizeof(a[0]))
void printBits(unsigned int val);

void getCharacterCount(FILE* fs, FILE* fd);
