#include <stdio.h>
int main(void)
{
int count, n1 = 0, n2 = 1, next;
for (count = 1; count <= 98; count++)
{
next = n1 + n2;
n1 = n2;
n2 = next;
printf("%d", next);
if (count != 98)
printf(", ");
}
printf("\n");
return 0;
}
