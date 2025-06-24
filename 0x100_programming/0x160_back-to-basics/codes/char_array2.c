/*
    The simpler version of `char_array.c`, which is easier method by stating the string, then define it into the array.
*/

#include <stdio.h>
#include <string.h> // Must be defined in order to use the `strcpy` function.

int main()
{
    char str_a[20];

    strcpy(str_a, "Hello, world!\n");
    printf(str_a);
}
