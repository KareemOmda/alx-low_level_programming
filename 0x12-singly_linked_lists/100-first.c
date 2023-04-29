#include<stdio.h>

/**
 * startlines - apply the constructor attribute to startlines() so that it
 *   is executed before main()
 */
void startlines(void) __attribute__ ((constructor));

/**
 * startlines - implementation of startlines
 */
void startlines(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
