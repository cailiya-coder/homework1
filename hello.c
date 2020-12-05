#include <stdio.h>
#include "add.h" 

int main(int argc, char *argv[])
{
	printf("Hello Robomaster!\r\n");
	for(int i=0;i<argc;++i)
		printf("argv[%d] is: %s\n", i, *(argv + i*sizeof(char)));
	printf("Result:%d\n\r",add(10));
	fflush(stdout);
	return 0;

}
