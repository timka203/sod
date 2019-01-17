#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
void task10()
{
	int a[12] = { 0 };
	int x = 0;
	int it = 0;
	for (size_t i = 0; i < 12; i++)
	{
		a[i] = 1 + rand() % 400;
		printf(" %d\n", a[i]);
	}
	printf("-------------\n");
	for (int i = 1; i < 12; i++)
	{
		if (a[i]>a[0])
			
		printf(" %d\n", i);
	}
	


}
void task9()
{
	int a[12] = { 0 };
	int x=0;
	int it = 0;
	for (size_t i = 0; i < 12; i++)
	{
		a[i] = 1 + rand() % 400;
			
			it = it + a[i];
			x = it / 20;
			
			
	}
	printf(" -%d-\n", x);
	for ( int i = 0; i <12 ;  i++)
	{
		if (i == 5)
			a[i] = x;
		printf(" %d\n", a[i]);
	}
}
void task8()
{
	int a[14] = { 0 };
	int x, s;
	int it = 0;
	for (size_t i = 0; i < 20; i++)
	{
		a[i] = 0 + rand() % 100;
		x = a[i] % 2;
		if (x==0)
			printf(" %d\n", a[i]);
	}
}
void task7()
{
	int a[20] = { 0 };
	int x, s;
	int it = 0;
	for (size_t i = 0; i < 20; i++)
	{
		a[i] = 1 + rand() % 4;
		if (a[i] < 3)
			printf("команда под номером %d\n", i);
	}

}
void task6()
{
	int a[10] = { 0 };
	int x, s;
	int it = 0;
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = -50 + rand() % 150;
		printf("%d\n\n", a[i]);

	}
	printf("--------------------\n");
	for (size_t i = 0; i < 10; i++)
	{
		for (int i = 0; i < 8 - 1; i++)
		{
			int x = 0;
			int it = 0;
			for (int j = 8 - 2; j >= i; j--)
			{
				if (a[j] < a[j + 1])
				{
					x = a[j];
					a[j] = a[j + 1];
					a[j + 1] = x;

					it++;
				}
			}
		}

		
		printf("%d\n\n", a[i]);
	}

}
void task5()
{
	int a[10] = { 0 };
	int x, s;
	int it = 0;
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = -50 + rand() % 150;
		printf("%d\n\n", a[i]);

	}
	printf("---------------");
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = a[i] - 20;
		printf("%d\n\n", a[i]);
	}
	printf("---------------");
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = a[i] * a[9];
		printf("%d\n\n", a[i]);
	}
	printf("---------------");
	printf("на сколько увеличить?");
	scanf_s("%d", &x);
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = a[i] + x;
		printf("%d\n\n", a[i]);
	}
}
void task4()
{
	int a[8] = { 0 };
	int x,s;
	int it = 0;
	for (size_t i = 0; i < 8; i++)
	{
		a[i] = -50 + rand() % 150;
		printf("%d\n\n", a[i]);

	}
	printf("which element?\n");
	scanf_s("%d", &s);
	if (a[s] > 0)
		printf("okay");
	else printf("nope");

	printf("which element?\n");
	scanf_s("%d", &x);
	it = a[x] % 2;
	if (it > 0)
		printf("nope");
	else printf("okay");
	if (s > x)
		printf("s>x");
	else printf("x>s");

}
void task3()
{
	int a[8] = { 0 };
	int x = 0;
	int it = 0;
	for (size_t i = 0; i < 8; i++)
	{
		a[i] = 50 + rand() % 50;
		printf("%d\n\n", a[i]);
		
		for (int i = 0; i < 8 - 1; i++)
		{
			for (int j = 8 - 2; j >= i; j--)
			{
				if (a[j] < a[j + 1])
				{
					x = a[j];
					a[j] = a[j + 1];
					a[j + 1] = x;

					it++;
				}
			}
		}
		
	}
	printf("\nAfter sorting\n");

	for (size_t i = 0; i < 8; i++)
	{
		printf("A[%d] = %d\n", i, a[i]);
	}
	printf("--------------------");
	for (int i = 0; i < 8 - 1; i++)
	{
		int x = 0;
		int it = 0;
		for (int j = 8 - 2; j >= i; j--)
		{
			if (a[j] > a[j + 1])
			{
				x = a[j];
				a[j] = a[j + 1];
				a[j + 1] = x;

				it++;
			}
		}
	}


printf("\nAfter sorting\n");

for (size_t i = 0; i < 8; i++)
{
	printf("A[%d] = %d\n", i, a[i]);
}
}
void task2()
{
	int a[10] = { 0 };
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = 50 + rand() % 50;
		printf("%d\n", a[i]);

	}


}
void task1()
{
	int a[10] = { 0 };
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = 1 + rand() % 100;
		printf("%d\n",a[i]);

	}
}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		case 3: task3(); break;
		case 4: task4(); break;
		case 5: task5(); break;
		case 6: task6(); break;
		case 7: task7(); break;
		case 8: task8(); break;
		case 9: task9(); break;
		case 10: task10(); break;
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}