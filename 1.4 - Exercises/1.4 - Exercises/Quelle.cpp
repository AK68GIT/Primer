/*
Exercises Section 1.4.1

Exercise 1.9: Write a program that uses a while to sum the numbers from
50 to 100.

Exercise 1.10: In addition to the ++ operator that adds 1 to its operand,
there is a decrement operator (--) that subtracts 1. Use the decrement
operator to write a while that prints the numbers from ten down to zero.

Exercise 1.11: Write a program that prompts the user for two integers.
Print each number in the range specified by those two integers.
*/

#include <iostream>

int val = 50, val2 = 50; //int for Exercise 1.9
int val3 = 11;           //int for Exercise 1.10
int userint, userint2;   //int for Exercise 1.11


int main()
{
	while (val2 <= 100) // Exercise 1.9
	{
		val += val2;
		val2++;
		std::cout << val << std::endl;
	}

	std::cout << "Exercise 1.10: " << std::endl;

	while (val3 > 0) //Exercise 1.10
	{
		val3--;
		std::cout << val3 << std::endl;
	}

	std::cout << "enter two integers, second int has to be bigger, to get all the numbers between" << std::endl; //Exercise 1.11
	std::cin >> userint >> userint2;
	
	while (userint < userint2)
	{
		userint++;
		std::cout << userint << std::endl;
	}
	//<-Breakingpoint here
	return 0;
}
