#include <iostream>
#include <string>

using namespace std;

/**
 * @enum NumberType
 * @brief Enum to represent if a number is even or odd.
 */
enum NumberType { Odd = 1, Even = 2 };

/**
 * @brief Reads an integer from the console.
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
 * @brief Checks if a number is even or odd.
 * @param number The number to check.
 * @return NumberType The type of the number (even or odd).
 */
NumberType checkNumberType(int number)
{
	int result = number % 2;

	if (result == 0)
	{
		return NumberType::Even;
	}
	else
	{
		return NumberType::Odd;
	}
}

/**
 * @brief Prints whether a number is even or odd.
 * @param numberType The type of the number (even or odd).
 */
void printNumberType(NumberType numberType)
{
	if (numberType == NumberType::Even)
	{
		cout << "\nNumber is Even.\n";
	}
	else
	{
		cout << "\nNumber is Odd.\n";
	}
}

int main()
{
	printNumberType(checkNumberType(readNumber()));

	return 0;
}