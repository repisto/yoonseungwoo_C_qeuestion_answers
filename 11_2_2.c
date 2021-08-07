#include <stdio.h>

int main()
{
	printf("Input a string to reverse: ");
	char arr[100];
	scanf_s("%s", arr, 100);

	// find index of null character
	int num = 0;
	while (arr[num] != 0)
		num++;

	char arr2[100];
	arr2[num] = 0;

	for (int i = 0; i < num; i++)
	{
		arr2[i] = arr[num - 1 - i];
	}

	printf("%s", arr2);
	
	return 0;
}



