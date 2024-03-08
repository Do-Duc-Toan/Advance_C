// C program to show how _Noreturn type 
// function behave if it has return statement.
#include <stdio.h>
#include <stdlib.h>

// With return value
_Noreturn void view()
{
	return 10;
}
int main(void)
{
	printf("Ready to begin...\n");
	view();

	printf("NOT over till now\n");
	return 0;
}
