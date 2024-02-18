#include <stdio.h>

int main()
{
    int *p;

    // Prints size of an 'int'
    printf("%zu\n", sizeof(int));

    // p is type 'int *', so prints size of 'int*'
    printf("%zu\n", sizeof p);

    // *p is type 'int', so prints size of 'int'
    printf("%zu\n", sizeof *p);
}