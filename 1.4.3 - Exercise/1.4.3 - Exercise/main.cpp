#include <iostream>

int main()
{
	int sum = 0, value = 0;
	// read until end-of-file, calculating a running total of all values read

	std::cout << "Enter all the numbers you wish to sum.\n" << "Press ENTER after every number press CTRL+Z followed by ENTER to calculate the sum." << std::endl;

	while (std::cin >> value)
		sum += value; // equivalent to sum = sum + value
	std::cout << "Sum is: " << sum << std::endl;
	return 0; //<- BREAKING POINT HERE

	return 0;
}