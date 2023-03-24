#include "main.h"
#include <stdio.h>

int main(void)
{
int r;

r = _abs(-1);
printf("%d\n", r);  // Output: 1

r = _abs(0);
printf("%d\n", r);  // Output: 0

r = _abs(1);
printf("%d\n", r);  // Output: 1

r = _abs(-98);
printf("%d\n", r);  // Output: 98
return (0);
}
