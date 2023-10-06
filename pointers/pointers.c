#include <stdio.h>

int main(void)
{
	int number = 123;
	int idx;
	int numbers[3] = {10, 2, 3};
/*
	printf("The size of number: %lu bytes\n", sizeof(number));
	printf("The size of numbers: %lu bytes\n", sizeof(numbers));
	printf("Value stored in numbers[0]: %d\n", numbers[0]);
	printf("Value stored in numbers[1]: %d\n", numbers[1]);
	printf("Value stored in numbers[2]: %d\n", numbers[2]);

	printf("Value stored in number: %d\n", number);

	numbers[1] = 10;
	for (idx = 0; idx < 3; idx++)
	{
		printf("Value stored in numbers[%d]: %d\n", idx, numbers[idx]);
	}
*/
//	printf("numbers: %p\n", numbers);
	printf("(numbers + 2): %p\n", (numbers + 2));
	printf("&numbers[2]: %p\n", &numbers[2]);
	
	printf("*(numbers + 2): %d\n", *(numbers + 2));
	printf("*numbers + 2: %d\n", *numbers + 2);
	printf("numbers[2]: %d\n", numbers[2]);
	
	return (0);
}
