#include <stdio.h>
#include "randomFile.h"
#include "stringFile.h"


int main(void) {
	
	char str[100] = "DummyComputerProgram";
	int totalLength = stringlength(str);
	int randomIndex = randomFunction() % totalLength;
	
	printf("Random Index of String str = %c \n", str[2]);
	
	return 0;
}

