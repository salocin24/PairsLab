#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int r = (rand() % 999) + 1;
	if (r % 2 == 0) {
		r + 1;
	}
	printf("Hello, world!\n");
	printf("%d", r);
	return 0;
}
