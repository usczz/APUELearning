#include <dirent.h>

int main(int argc, char* argv[]) {
	DIR *dp;
	struct dirent *dirp;

	if (argc != 2) {
		
