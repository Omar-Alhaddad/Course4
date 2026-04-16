#include <iostream>

using namespace std;

/**
 * @enum FinalResult
 * @brief Enumerates the possible outcomes of a test.
 *
 * @details This enumeration is used to represent whether a test has been passed or failed.
 */
enum FinalResult
{
	Pass = 1,	//< The test has been passed
	Fail = 2	//< The test has been failed
};

/**
 * @brief Reads an integer from the console.
 *
 * @return int The mark entered by the user.
 */
int readMark()
{
	int mark;

	cout << "Enter your mark: ";
	cin >> mark;

	return mark;
}

/**
 * @brief Checks the mark of a test.
 *
 * @param mark The mark of the test.
 * @return FinalResult The result of the test.
 */
FinalResult checkMark(int mark)
{
	if (mark >= 50)
		return FinalResult::Pass;

	else
		return FinalResult::Fail;
}

/**
 * @brief Prints the result of a test.
 *
 * @param mark The mark of the test.
 */
void printResult(int mark)
{
	if (checkMark(mark) == FinalResult::Pass)
		cout << "\nYou Passed\n";

	else
		cout << "\nYou Failed\n";
}

int main()
{
	printResult(readMark());

	return 0;
}