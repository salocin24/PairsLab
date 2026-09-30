#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int r = (rand() % 999) + 1;
	if (r % 2 == 0) {
		r +=  1;
	}

	printf("%d\n", r);

	int input = -1;

	printf("Enter your guess: ");
	scanf("%d", &input);

	while (input != r)
	{
		printf("%d is wrong, guess again!\n", input);

		printf("Enter your guess: ");
		scanf("%d", &input);
	} 
	return 0;
}
