#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
  /**
   * main - Entry point
   * This function initializes an integer variable n, an integer array a with 5
   * elements, and a pointer p to an integer. It sets the value of the third
   * element of a to 1024, and then modifies the value of the
   * integer pointed to
   * by p so that it is equal to 98. Finally, it prints the value of the third
   * element of a to the console
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
p[5] = 98;

printf("a[2] = %d\n", a[2]);
return (0);
}
