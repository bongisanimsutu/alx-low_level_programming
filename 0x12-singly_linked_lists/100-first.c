#include <stdio.h>

void execute_before_main(void) __attribute__ ((constructor));

/**
 * execute_before_main - prints a custom message before the main
 * function is executed
 */
void execute_before_main(void)
{
    printf("A special message before main starts.\n");
}
