#include <stdio.h>

int main(void)
{
	int num1 = 4, num2 = 16;

	if (num1 > num2)
	{
		printf("%i / %i = %i\n", num1, num2, num1/num2);
	}
	else
	{
		printf("%i / %i = %i\n", num2, num1, num2/num1);
	}

        return (0);
}
