#include <iostream>

using namespace std;

/**
 * @brief Reads three numbers from the user and stores them in the given variables.
 *
 * @param num1 The first number.
 * @param num2 The second number.
 * @param num3 The third number.
 */
void readNumbers(int& num1, int& num2, int& num3)
{
	cout << "Enter number 1: ";
	cin >> num1;

	cout << "Enter number 2: ";
	cin >> num2;

	cout << "Enter number 3: ";
	cin >> num3;
}

/**
 * @brief Computes the sum of three numbers.
 *
 * @param num1 The first number.
 * @param num2 The second number.
 * @param num3 The third number.
 * @return int The sum of the three numbers.
 */
int sumOfNumbers(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}

/**
 * @brief Prints the sum of three numbers.
 *
 * @param sum The sum of the three numbers.
 */
void printResult(int sum)
{
	cout << "\nThe total sum of numbers is: " << sum << endl;
}

int main()
{
	int num1, num2, num3;

	readNumbers(num1, num2, num3);

	printResult(sumOfNumbers(num1, num2, num3));

	return 0;
}