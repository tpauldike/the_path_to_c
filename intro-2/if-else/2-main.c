#include <stdio.h>

int main(void)
{
	char *role = "front end";

	if ((role == "front end") || (role == "back end"))
	{
		printf("Congratulations! You got the %s job\n", role);
	}
	else
	{
		printf("Sorry, a %s is not needed\n", role);
	}

        return (0);
}
