#include <iostream>
int main()
{
	int a[50], num, size, pos, i;
	std::cout << "enter the number to insert: ";
	std::cin >> num;
	std::cout << "enter the size of array";
	std::cin >> size;
	std::cout << "position: ";
	std::cin >> pos;

	for (i = 0; i <= size - 1; i++)
	{
		std::cout << "enter the number:";
		std::cin >> a[i];
	}
	for (i = size - 1; i >= pos - 1; i--)
	{
		a[i + 1] = a[i];

	}
	a[pos - 1] = num;
	size++;
	if (pos > size - 1 || pos <= 0)
	{
		std::cout << "invalid Number";
	}
	else
	{
		for (i = 0; i <= size - 1; i++)
		{
			std::cout << a[i]<<",";
		}
	}

	return 0;
