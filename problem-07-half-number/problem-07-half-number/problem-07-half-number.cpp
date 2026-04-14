#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Reads an integer from the console.
 *
 * @return int The number entered by the user.
 */
int readNumber()
{
	int number;

	cout << "Enter a number: ";
	cin >> number;

	return number;
}

/**
 * @brief Calculates the half of a given number.
 *
 * @param number The number to calculate the half of.
 * @return float The half of the given number.
 */
float calculateHalfNumber(int number)
{
	return (float)number / 2;
}

/**
 * @brief Prints the half of a given number to the console.
 *
 * @param number The number to calculate the half of.
 */
void printResult(int number)
{
	string result = "Half of " + to_string(number) + " is " + to_string(calculateHalfNumber(number));

	cout << '\n' << result << '\n';
}

int main()
{
	printResult(readNumber());

	return 0;
}