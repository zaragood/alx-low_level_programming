#include <stdio.h>
/**
 * before_main - Function that prints a message before main function is executed
 * Description: This function is decorated with the __attribute__constructor
 * function attribute, which causes it to be executed automatically before the
 * `main` function is executed. The function simply prints the message
 * "You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
 * to the console using the `printf` function.
 *
 * Return: void
 */

void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
