int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (scanf("%d %d %d\n", &a, &b, &c))
	{
		if (a + b > c || a + c > b || b + c > a)
		{

			if (a == b || b == c || a == c)
			{
				printf("Isosceles triangle!\n");
			}
			else if (a == b && b == c)
			{
				printf("Equilateral triangle!\n");
			}

			else
			{
				printf("Ordinary triangle!\n");
			}
		}

		else
		{
			printf("Not a triangle!\n");
		}
		return 0;
	}