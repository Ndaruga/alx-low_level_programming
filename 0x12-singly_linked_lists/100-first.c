#include <stdio.h>

/**
 * run_before_main - executes this function before the main function
 */

/* made possible by prior declaration of "__attribute__ ((constructor)) */
void __attribute__ ((constructor)) run_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
