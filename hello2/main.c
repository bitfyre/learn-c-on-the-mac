#include <stdio.h>

void SayHello( void );

int main (int argc, const char * argv[]) {
	SayHello();
	
    return 0;
}

void SayHello( void ){
	printf("Hello World!\n");
}