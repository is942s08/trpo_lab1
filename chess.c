#include <stdio.h>

int main(int argc, char* argv[])
{
	if (argc != 2) {
		printf("Usage: ./chess [file]\n");
		return 0;
	}
	
	char* filename = argv[1];
	
	return 0;
}