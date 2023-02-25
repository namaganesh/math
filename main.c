#include <stdio.h>
#include <unistd.h>
#include "definition.h"
int main()
{
	add(10,5);
	sleep(1);
	mul(10,5);
	sleep(1);
	div(10,5);
	sleep(1);
	sub(10,5);
	return 0;
}	
