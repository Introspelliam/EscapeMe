#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
	char *buf1, *buf2;


	buf1 = malloc(128);
	buf2 = malloc(128);
	printf("buf1 : %p, buf2 : %p\n", buf1, buf2);

	printf("Input string...");
	read(0, buf1, 128);

	sprintf(buf2, "input : %s\natoi : %d\n", buf1, atoi(buf1));
	puts(buf2);

	free(buf1);
	free(buf2);

	return 0;
}
