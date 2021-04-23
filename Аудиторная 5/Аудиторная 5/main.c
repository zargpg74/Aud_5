#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int get_rand_range_int(const int min, const int max) {
	return rand() % (max - min + 1) + min;
}

void main()
{
	system("cls");
	system("color 2");
	srand(time(NULL));

	int str[40];

	while (1)
	{
		for (int i = 0; i < 40; i++)
		{
			str[i] = get_rand_range_int(10, 127);
			printf("%c", str[i]);
		}

		Sleep(100);
		printf("\n");
	}
}