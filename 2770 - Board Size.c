#include <stdio.h>

int main ()
{

	unsigned a, b, c;
	unsigned d, e;
	unsigned i;

	while (scanf("%u %u %u", &a, &b, &c) != EOF)
	{

		for (i = 0; i < c; i++)
		{
			scanf("%u %u", &d, &e);

			if ((d <= a && e <= b) || (d <= b && e <= a))
				printf("Sim\n");
			else
				printf("Nao\n");
		}

	}
	return 0;
}
