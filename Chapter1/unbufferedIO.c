#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFERSIZE 4096

void main(int argc, char* argv[]) {
	int n;
	char buffer[BUFFERSIZE];

	while ((n = read(STDIN_FILENO, buffer, BUFFERSIZE)) > 0) {
		if (write(STDOUT_FILENO, buffer, n) != n) {
			printf("write error");
			exit(-1);
		}
	}

	if (n < 0) {
		printf("read errpr");
		exit(-1);
	}

	exit(0);		
}
