#include <iostream>

using namespace std;

/**
 * @struct UserInfo
 * @brief Stores a user's first and last name.
 */
struct UserInfo
{
	string firstName;	///< The person's first name
	string lastName;	///< The person's last name
};

/**
 * @brief Prompts the user to enter their first and last name and reads them from input.
 * @return A struct with the user's first and last name.
 */
UserInfo readInfo()
{
	UserInfo info;

	cout << "Enter your first name: ";
	cin >> info.firstName;

	cout << "Enter your last name: ";
	cin >> info.lastName;

	return info;
}

/**
 * @brief Formats the full name based on the given Info struct and reversal flag.
 * @param info A struct containing the first and last name.
 * @param isReversed A boolean flag to determine whether to reverse the order of the name.
 * @return A string containing the full name in the specified order.
 */
string getFullName(const UserInfo& info, bool isReversed)
{
	string fullName = "";

	if (isReversed)
		fullName = info.lastName + " " + info.firstName;

	else
		fullName = info.firstName + " " + info.lastName;

	return fullName;
}

/**
 * @brief Prints the full name provided as a parameter.
 * @param fullName The full name to be printed.
 */
void printFullName(const string& fullName)
{
	cout << "\nYour full name is: " << fullName << '\n';
}

int main()
{
	printFullName(getFullName(readInfo(), true));

	return 0;
}