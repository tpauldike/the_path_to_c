#include <stdio.h>

int main(void)
{
	int age = 17;

	if (age >= 18 && age <= 25)
	{
		printf("You are %i and qualified for the job\n", age);
	}
	else if (age < 18)
	{
		printf("You are %i and underaged, please!\n", age);
	}
	else
	{
		printf("You are %i and too old for the job!\n", age);
	}

        return (0);
}
