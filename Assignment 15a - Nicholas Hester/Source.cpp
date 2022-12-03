#include <iostream>
using namespace std;

class invalidRangeException
{};

char character(char start, int offset);

int main()
{
	return 0;
}

char character(char start, int offset)
{
	try
	{
		if (!((start >= 'a' && start <= 'z') || (start >= 'A' && start <= 'Z')))
			throw invalidRangeException();
	}
	catch (invalidRangeException)
	{
		cout << "Invalid Range Exception";
		return ' ';
	}

	bool place;
	if (start >= 'a' && start <= 'z')
		place = true;
	else
		place = false;

	try
	{
		if (place && start + offset < 'a' || place && start + offset>'z' || !place && start + offset < 'A' || !place && start + offset>'Z')
			throw invalidRangeException();
	}
	catch (invalidRangeException)
	{
		cout << "Invalid Range Exception";
		return ' ';
	}
	return start + offset;
}