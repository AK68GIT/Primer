#include <iostream>


int main() //Exercise 1.5
{
	int n1, n2;

	std::cout << "hello world, enter 2 numbers to multiply:\n";
	std::cin >> n1 >> n2;
	std::cout << "The product of "
		      <<   n1   << " and " << n2
		      << " is " << n1 * n2 << std::endl;

	return 0;
}

/*Exercise 1.6: Explain whether the following program fragment is legal:
*
*std::cout << "The sum of " << v1;
*<< " and " << v2;
*<< " is " << v1 + v2 << std::endl;
*
*A: It´s not legal because the semicolon end the "std::cout" function so another call would be needed every time something should be printed.
*I´d fix it by removing the semicolons and/or formatting the operators differently.*/