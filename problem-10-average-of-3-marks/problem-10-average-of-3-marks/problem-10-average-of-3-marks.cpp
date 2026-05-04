#include <iostream>

using namespace std;

/**
 * @brief Reads three exam marks from the user and stores them in the given variables.
 *
 * @param mark1 A reference to the first mark.
 * @param mark2 A reference to the second mark.
 * @param mark3 A reference to the third mark.
 * @return void
 */
void readNumbers(int& mark1, int& mark2, int& mark3)
{
	cout << "Enter mark 1: ";
	cin >> mark1;

	cout << "Enter mark 2: ";
	cin >> mark2;

	cout << "Enter mark 3: ";
	cin >> mark3;
}

/**
 * @brief Calculates the total sum of three marks.
 *
 * @param mark1 First mark.
 * @param mark2 Second mark.
 * @param mark3 Third mark.
 * @return The sum of the three marks as an integer.
 */
int sumOfMarks(int mark1, int mark2, int mark3)
{
	return mark1 + mark2 + mark3;
}

/**
 * @brief Calculates the average of three marks.
 *
 * @param mark1 First mark.
 * @param mark2 Second mark.
 * @param mark3 Third mark.
 * @return A float value representing the average of the marks.
 */
float calculateAverage(int mark1, int mark2, int mark3)
{
	return (float)sumOfMarks(mark1, mark2, mark3) / 3;
}

/**
 * @brief Prints the average of three marks.
 *
 * @param average The average of the three marks.
 * @return void
 */
void printResult(float average)
{
	cout << "\nThe average of marks is: " << average << endl;
}

int main()
{
	int mark1, mark2, mark3;

	readNumbers(mark1, mark2, mark3);

	printResult(calculateAverage(mark1, mark2, mark3));

	return 0;
}