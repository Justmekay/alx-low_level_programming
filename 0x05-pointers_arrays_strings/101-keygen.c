table File  15 lines (14 sloc)  185 Bytes
#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 */
int main(void)
{
int num;

srand(time(0));
num = rand();
printf("Anything; %i\n", num);
return (0);
}
